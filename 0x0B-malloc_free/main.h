#ifndef MAIN_H
#define MAIN_H
#include <unistd.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
char *create_array(unsigned int size, char c);
void free_grid(int **grid, int height);
char *_strdup(char *str);
#endif /*MAIN_H*/
