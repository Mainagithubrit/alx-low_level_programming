#include "main.h"
/**
 * _strcpy - a function that copies the string pointed to by src
 * @dest: destination
 * @src: source
 * Return: string
 */
char *_strcpy(char *dest, char *src)
{
int length = 0;
while (*(src + length) != '\0')
{
*(dest + length) = *(src + length);
length++;
}
*(dest + length) = '\0';
return (dest);
}
