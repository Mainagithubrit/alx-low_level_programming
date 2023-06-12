#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * str_concat -  a function that concatenates two strings
 * @s1: the first character
 * @s2: te second character
 * Return: 0
 */

char *str_concat(char *s1, char *s2)
{
char *con;
int i, j;

if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";

i = j = 0;
while (s1[i] != '\0')
i++;
while (s2[j] != '\0')
j++;
con = malloc(sizeof(char) * (i + j + 1));

if (con == NULL)
return (NULL);
i = j = 0;
while (s1[i] != '\0')
{
con[i] = s1[i];
i++;
}
while (s2[j] != '\0')
{
con[i] = s2[j];
i++, j++;
}
con[i] = '\0';
return (con);
}

