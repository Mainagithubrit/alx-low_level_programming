#include "main.h"
/**
 * _strncat - a function that concatenates two strings.
 * @dest: value input to copy to
 * @src: value input to copy from
 * @n: number of  char to be copied
 * Return: void
 */
char *_strncat(char *dest, char *src, int n)
{
int i;
int j;
i = 0;
while (dest[i] != '\0')
{
i++;
}
j = 0;
while (j < n && src[j] != '\0')
{
dest[i] = src[j];
i++;
j++;
}
dest[i] = '\0';
return (dest);
}
