#ifndef __SIMPLE_SHELLEX__
#define __SIMPLE_SHELLEX__

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/stat.h>
#include <string.h>
#include <signal.h>

typedef struct listpath {
	char *str;
	struct listpath *next;
} listpath_t;

char *_getenv(const char *name);
listpath_t *add_node_end(listpath_t **head, char *str);

#endif
