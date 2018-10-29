#include "common.h"
#include <math.h>
#include <stdlib.h>
int bound(int a, int b, int c){
  if(a < b){
    return b;
  }
  if (a > c){
    return c;
  }
  return a;
}

double rand_double();
/**rand_double - RAND double
  *Computes a random double between 0 and 1 using C's inbuilt RNG
*/
double rand_double(){
  return (double)rand() / (double)RAND_MAX;
}

int rand_int(int a, int b){
    return (int)round((rand_double() * (b - a)) + a);
}
