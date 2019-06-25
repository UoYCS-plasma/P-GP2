BUILT_SOURCES = lexer.c parser.h parser.c
AM_YFLAGS = -d

CFLAGS += " -fPIC"

lib_LIBRARIES = libgp2.a

libgp2_a_SOURCES = common.c debug.c graph.c graphStacks.c label.c morphism.c \
                   lexer.l parser.y
include_HEADERS = common.h debug.h graph.h graphStacks.h label.h \
                  morphism.h parser.h

CLEANFILES = parser.c parser.h
