/* Copyright 2015-2016 Christopher Bak

  This file is part of the GP 2 Compiler. The GP 2 Compiler is free software:
  you can redistribute it and/or modify it under the terms of the GNU General
  Public License as published by the Free Software Foundation, either version 3
  of the License, or (at your option) any later version.

  The GP 2 Compiler is distributed in the hope that it will be useful, but
  WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY
  or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for
  more details.

  You should have received a copy of the GNU General Public License
  along with the GP 2 Compiler. If not, see <http://www.gnu.org/licenses/>. */

#include "morphism.h"
#include "stdlib.h"

Morphism *makeMorphism(int nodes, int edges, int variables)
{
   Morphism *morphism = malloc(sizeof(Morphism));

   morphism->weight = 1.0;

   if(morphism == NULL)
   {
      print_to_log("Error (makeMorphism): malloc failure.\n");
      exit(1);
   }
   morphism->nodes = nodes;
   if(nodes > 0)
   {
      morphism->node_map = calloc(nodes, sizeof(Map));
      if(morphism->node_map == NULL)
      {
         print_to_log("Error (makeMorphism): malloc failure.\n");
         exit(1);
      }
   }
   else morphism->node_map = NULL;

   morphism->edges = edges;
   if(edges > 0)
   {
      morphism->edge_map = calloc(edges, sizeof(Map));
      if(morphism->edge_map == NULL)
      {
         print_to_log("Error (makeMorphism): malloc failure.\n");
         exit(1);
      }
   }
   else morphism->edge_map = NULL;

   morphism->variables = variables;
   morphism->variable_index = 0;
   if(variables > 0)
   {
      morphism->assignment = calloc(variables, sizeof(Assignment));
      if(morphism->assignment == NULL)
      {
         print_to_log("Error (makeMorphism): malloc failure.\n");
         exit(1);
      }
      morphism->assigned_variables = calloc(variables, sizeof(int));
      if(morphism->assigned_variables == NULL)
      {
         print_to_log("Error (makeMorphism): malloc failure.\n");
         exit(1);
      }
   }
   else
   {
      morphism->assignment = NULL;
      morphism->assigned_variables = NULL;
   }
   initialiseMorphism(morphism, NULL);
   return morphism;
}

void initialiseMorphism(Morphism *morphism, Graph *graph)
{
   int index;
   for(index = 0; index < morphism->nodes; index++)
   {
      if(graph != NULL && morphism->node_map[index].host_index >= 0)
         resetMatchedNodeFlag(graph, morphism->node_map[index].host_index);
      morphism->node_map[index].host_index = -1;
      morphism->node_map[index].assignments = 0;
   }
   for(index = 0; index < morphism->edges; index++)
   {
      if(graph != NULL && morphism->edge_map[index].host_index >= 0)
         resetMatchedEdgeFlag(graph, morphism->edge_map[index].host_index);
      morphism->edge_map[index].host_index = -1;
      morphism->edge_map[index].assignments = 0;
   }
   morphism->variable_index = 0;
   for(index = 0; index < morphism->variables; index++)
   {
      if(morphism->assignment[index].type == 's')
      {
         free(morphism->assignment[index].str);
         morphism->assignment[index].str = NULL;
      }
      if(morphism->assignment[index].type == 'l')
      {
         removeHostList(morphism->assignment[index].list);
         morphism->assignment[index].list = NULL;
      }
      morphism->assignment[index].type = 'n';
      morphism->assigned_variables[index] = -1;
   }
}

/* 10/1/17 Tim Atkinson */
/* Copies a given morphism by creating a new morphism with the same parameters and then using the duplicateMorphism method */
Morphism *copyMorphism(Morphism *morphism, Graph *graph)
{
   Morphism *new_morphism = makeMorphism(morphism->nodes, morphism->edges, morphism->variables);
   duplicateMorphism(morphism, new_morphism, graph);
   return new_morphism;
}

/* 10/1/17 Tim Atkinson */
/* Duplicates a morphism into another of the same size by copying the internal structure over */
/* s is the source morphism that will be copied and t is the target morphism that will be copied into */
void duplicateMorphism(Morphism *s, Morphism *t, Graph *graph)
{
   assert(s->nodes == t->nodes);
   assert(s->edges == t->edges);
   assert(s->variables == t->variables);
   initialiseMorphism(t, graph);

   /* Copy each node morphism */
   for(int n = 0; n < s->nodes; n++){
     t->node_map[n].host_index = s->node_map[n].host_index;
     t->node_map[n].assignments = s->node_map[n].assignments;
   }
   /* Copy each edge morphism */
   for(int e = 0; e < s->edges; e++){
     t->edge_map[e].host_index = s->edge_map[e].host_index;
     t->edge_map[e].assignments = s->edge_map[e].assignments;
   }

   /* Copy each assignment */
   for(int v = 0; v < s->variables; v++){

     if(s->assignment[v].type == 's'){
       addStringAssignment(t, v, s->assignment[v].str);
     }
     else if(s->assignment[v].type == 'i'){
       addIntegerAssignment(t, v, s->assignment[v].num);
     }
     else if(s->assignment[v].type == 'l'){
       addListAssignment(t, v, s->assignment[v].list);
     }

     /*if(s->assignment[v].type == 's'){
       printf("Duplicate %s\n", s->assignment[v].str);
       t->assignment[v].str = malloc((strlen(s->assignment[v].str) + 1) * sizeof(char));
       for(int i = 0; s->assignment[v].str[i] != '\0'; i++){
         t->assignment[v].str[i] = s->assignment[v].str[i];
       }
       printf("Stored %s\n", t->assignment[v].str);
     }
     t->assignment[v].type = s->assignment[v].type;
     t->assignment[v].num = s->assignment[v].num;
     t->assignment[v].list = s->assignment[v].list;
     if(t->assignment[v].type == 's'){
       printf("%c: %s\n", t->assignment[v].type, t->assignment[v].str);
     }*/

   }
   t->weight = s->weight;

}


void addNodeMap(Morphism *morphism, int left_index, int host_index, int assignments)
{
   assert(left_index < morphism->nodes);
   morphism->node_map[left_index].host_index = host_index;
   morphism->node_map[left_index].assignments = assignments;
}

void addEdgeMap(Morphism *morphism, int left_index, int host_index, int assignments)
{
   assert(left_index < morphism->edges);
   morphism->edge_map[left_index].host_index = host_index;
   morphism->edge_map[left_index].assignments = assignments;
}

int addListAssignment(Morphism *morphism, int id, HostList *list)
{
   /* Search the morphism for an existing assignment to the passed variable. */
   assert(id < morphism->variables);
   if(morphism->assignment[id].type == 'n')
   {
      morphism->assignment[id].type = 'l';
      #ifdef LIST_HASHING
         addHostList(list);
         morphism->assignment[id].list = list;
      #else
         HostList *list_copy = copyHostList(list);
         morphism->assignment[id].list = list_copy;
      #endif
      pushVariableId(morphism, id);
      return 1;
   }
   /* Compare the list in the assignment to the list passed to the function. */
   else
   {
      if(morphism->assignment[id].list == list) return 0;
      else return -1;
   }
}

int addIntegerAssignment(Morphism *morphism, int id, int num)
{
   assert(id < morphism->variables);
   if(morphism->assignment[id].type == 'n')
   {
      morphism->assignment[id].type = 'i';
      morphism->assignment[id].num = num;
      pushVariableId(morphism, id);
      return 1;
   }
   else
   {
      if(morphism->assignment[id].num == num) return 0;
      else return -1;
   }
}

int addStringAssignment(Morphism *morphism, int id, string str)
{
   assert(id < morphism->variables);
   if(morphism->assignment[id].type == 'n')
   {
      morphism->assignment[id].type = 's';
      morphism->assignment[id].str = strdup(str);
      pushVariableId(morphism, id);
      return 1;
   }
   else
   {
      if(strcmp(morphism->assignment[id].str, str) == 0) return 0;
      else return -1;
   }
}

void removeNodeMap(Morphism *morphism, int left_index)
{
   morphism->node_map[left_index].host_index = -1;
   removeAssignments(morphism, morphism->node_map[left_index].assignments);
   morphism->node_map[left_index].assignments = 0;
}

void removeEdgeMap(Morphism *morphism, int left_index)
{
   morphism->edge_map[left_index].host_index = -1;
   removeAssignments(morphism, morphism->edge_map[left_index].assignments);
   morphism->edge_map[left_index].assignments = 0;
}

void removeAssignments(Morphism *morphism, int number)
{
   int count;
   for(count = 0; count < number && morphism->variable_index > 0; count++)
   {
      int id = popVariableId(morphism);
      if(morphism->assignment[id].type == 's')
      {
         free(morphism->assignment[id].str);
         morphism->assignment[id].str = NULL;
      }
      if(morphism->assignment[id].type == 'l')
      {
         removeHostList(morphism->assignment[id].list);
         morphism->assignment[id].list = NULL;
      }
      morphism->assignment[id].type = 'n';
   }
}

void pushVariableId(Morphism *morphism, int id)
{
   assert(morphism->variable_index < morphism->variables);
   morphism->assigned_variables[morphism->variable_index++] = id;
}

int popVariableId(Morphism *morphism)
{
   assert(morphism->variable_index > 0);
   morphism->variable_index--;
   return morphism->assigned_variables[morphism->variable_index];
}

int lookupNode(Morphism *morphism, int left_index)
{
   return morphism->node_map[left_index].host_index;
}

int lookupEdge(Morphism *morphism, int left_index)
{
   return morphism->edge_map[left_index].host_index;
}

int getIntegerValue(Morphism *morphism, int id)
{
   assert(id < morphism->variables);
   return morphism->assignment[id].num;
}

string getStringValue(Morphism *morphism, int id)
{
   assert(id < morphism->variables);
   return morphism->assignment[id].str;
}

Assignment getAssignment(Morphism *morphism, int id)
{
   assert(id < morphism->variables);
   return morphism->assignment[id];
}

int getAssignmentLength(Assignment assignment)
{
   if(assignment.type != 'l') return 1;
   if(assignment.list == NULL) return 0;
   HostListItem *item = assignment.list->first;
   int length = 0;
   while(item != NULL)
   {
      length++;
      item = item->next;
   }
   return length;
}

/* If rule_string is a prefix of host_string, return the position in host_string
 * immediately after the end of rule_string. Otherwise return -1. */
int isPrefix(const string rule_string, const string host_string)
{
   int length = strlen(rule_string);
   int offset = strlen(host_string) - length;
   if(offset < 0) return -1;
   /* strncmp compares rule_string against the first strlen(rule_string) characters
    * of host_string. */
   if(!strncmp(host_string, rule_string, length)) return length;
   else return -1;
}

/* If rule_string is a proper suffix of host_string, return the position in
 * host_string immediately before the start of rule_string. If rule_string
 * equals host_string, return 0. Otherwise return -1. */
int isSuffix(const string rule_string, const string host_string)
{
   int offset = strlen(host_string) - strlen(rule_string);
   if(offset < 0) return -1;
   /* Compare the last strlen(rule_string) characters of str with rule_string. */
   if(!strcmp(host_string + offset, rule_string))
      return offset == 0 ? 0 : offset - 1;
   else return -1;
}

void printMorphism(Morphism *morphism)
{
   if(morphism == NULL)
   {
      printf("No morphism exists.\n\n");
      return;
   }
   int index;
   if(morphism->node_map != NULL)
   {
      printf("\nNode Mappings\n=============\n");
      for(index = 0; index < morphism->nodes; index++)
         printf("%d --> %d\n", index, morphism->node_map[index].host_index);
      printf("\n");
   }
   if(morphism->edge_map != NULL)
   {
      printf("Edge Mappings\n=============\n");
      for(index = 0; index < morphism->edges; index++)
         printf("%d --> %d\n", index, morphism->edge_map[index].host_index);
      printf("\n");
   }
   if(morphism->assignment != NULL)
   {
      for(index = 0; index < morphism->variables; index++)
      {
         printf("Variable %d -> ", index);
         if(morphism->assignment[index].type == 'n') printf("Unassigned");
         if(morphism->assignment[index].type == 'i')
           printf("%d", morphism->assignment[index].num);
         if(morphism->assignment[index].type == 's')
           printf("\"%s\"", morphism->assignment[index].str);
         if(morphism->assignment[index].type == 'l')
         {
            if(morphism->assignment[index].list == NULL) printf("empty");
            else printHostList(morphism->assignment[index].list->first, stdout);
         }
         printf("\n\n");
      }
   }
}

void freeMorphism(Morphism *morphism)
{
   if(morphism == NULL) return;
   if(morphism->node_map != NULL) free(morphism->node_map);
   if(morphism->edge_map != NULL) free(morphism->edge_map);


   if(morphism->assignment != NULL)
   {
      int index;
      for(index = 0; index < morphism->variables; index++)
      {
         if(morphism->assignment[index].type == 's'){
            free(morphism->assignment[index].str);
         }
        if(morphism->assignment[index].type == 'l'){
           removeHostList(morphism->assignment[index].list);
         }

      }
      free(morphism->assignment);
   }

   if(morphism->assigned_variables != NULL) free(morphism->assigned_variables);
   free(morphism);
}

MorphismHolder *makeMorphismHolder(Morphism *morphism, Graph *graph){
  MorphismHolder *holder = malloc(sizeof(MorphismHolder));
  holder->morphism = copyMorphism(morphism, graph);
  holder->next = NULL;
  return holder;
}

MorphismPot *makeMorphismPot(int nodes, int edges, int variables)
{
   MorphismPot *morphismPot = malloc(sizeof(MorphismPot));
   morphismPot->first = NULL;
   morphismPot->totalWeight = 0.0;
   return morphismPot;
}

void putMorphism(MorphismPot *pot, Morphism *morphism, string ruleName, Graph *graph){
  pot->totalWeight = pot->totalWeight + morphism->weight;
  MorphismHolder *holder = makeMorphismHolder(morphism, graph);
  holder->ruleName = ruleName;

  if(pot->first == NULL){
    pot->first = holder;
  }
  else{
    pot->last->next = holder;
  }
  pot->last = holder;
}

void emptyPot(MorphismPot *pot){
  MorphismHolder *holder = pot->first;
  MorphismHolder *newHolder = NULL;
  pot->first = NULL;
  while(holder != NULL){
      freeMorphism(holder->morphism);
      holder->morphism = NULL;

      newHolder = holder->next;
      holder->next = NULL;
      free(holder);
      holder = newHolder;
  }
  holder = NULL;
  newHolder = NULL;
  pot->totalWeight = 0.0;
}

void freePot(MorphismPot *pot){
  emptyPot(pot);
  free(pot);
}

int potSize(MorphismPot *pot){
  int size = 0;
  MorphismHolder *holder = pot->first;
  while(holder != NULL){
    holder = holder->next;
    size = size + 1;
  }
  return size;
}

MorphismHolder *drawFromPot(MorphismPot *pot){
  if(potSize(pot) == 0){
    return NULL;
  }
  double r = ((double)rand() / (double)RAND_MAX);
  r = r * pot->totalWeight;
  MorphismHolder *holder = pot->first;
  MorphismHolder *previousHolder = NULL;
  double sum = holder->morphism->weight;
  while(r > sum){
    if(previousHolder == NULL){
      previousHolder = pot->first;
    }
    else{
      previousHolder = previousHolder->next;
    }
    holder = holder->next;
    sum = sum + holder->morphism->weight;
  }

  if(previousHolder != NULL){
    if(holder->next != NULL){
      previousHolder->next = holder->next;
    }
    else{
      previousHolder->next = NULL;
      pot->last = previousHolder;
    }
  }
  else{
    if(holder->next != NULL){
      pot->first = holder->next;
    }
    else{
      pot->first = NULL;
      pot->last = NULL;
    }
  }
  holder->next = NULL;
  pot->totalWeight = pot->totalWeight - holder->morphism->weight;
  return holder;
}

void printPot(MorphismPot *pot){
  printf("Pot (%d): %lf\n", potSize(pot), pot->totalWeight);
  MorphismHolder *holder = pot->first;
  int i = 1;
  while(holder != NULL){
    printf("Morphism %d\n", i);
    i = i + 1;
    printMorphism(holder->morphism);
    holder = holder->next;
  }
}
