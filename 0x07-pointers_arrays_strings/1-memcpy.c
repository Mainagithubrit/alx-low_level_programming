#include "main.h"
/**
 * _memcpy -  a function that copies memory area.
 * @dest: memory to be copied to
 * @src: memory to be copied from
 * @n: fuction to be copied
 * Return: a pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
int r = 0;
int i = n;
for (; r < i; r++)
{
dest[r] = src[r];
n--;
}
return (dest);
}
