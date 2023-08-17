#ifndef main_h
#define main_h

#include <stddef.h>

void print_name(char *name, void (*func)(char *));
void array_iterator(int *, size_t s, void (*func)(int));
int int_index(int *, int, int (*comp)(int));

#endif
