#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - a function that concatenates two strings.
 * @s1: first string
 * @s2: second string
 * @n: index
 * Return: 0
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *p;
unsigned int size1 = 0, size2 = 0, i = 0, j = 0;

while (s1 && s1[size1])
size1++;

while (s2 && s2[size2])
size2++;

if (n < size2)

p = malloc(sizeof(char) * (size1 + n + 1));

else

p = malloc(sizeof(char) * (size1 + size2 + 1));
if (!p)
return (NULL);

while (i < size1)
{
p[i] = s1[i];
i++;
}
while (n < size2 && i < (size1 + n))
p[i++] = s2[j++];

while (n >= size2 && i < (size1 + size2))
p[i++] = s2[j++];
p[i] = '\0';

return (p);
}
