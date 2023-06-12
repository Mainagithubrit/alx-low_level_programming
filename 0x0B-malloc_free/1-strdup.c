#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _strdup - a function that returns a pointer to a newly allocated
 * space in memory,which contains a copy of the string given as a parameter.
 * @str: string
 * Return: 0
 */

char *_strdup(char *str)
{
int size, i;
char *ptr;
if (str == NULL)
return (NULL);

size = 0;
while (str[size] != '\0')
size++;
ptr = malloc(sizeof(char) * (size + 1));

if (ptr == NULL)
return (NULL);
for (i = 0; str[i]; i++)
ptr[i] = str[i];
return (ptr);
}
