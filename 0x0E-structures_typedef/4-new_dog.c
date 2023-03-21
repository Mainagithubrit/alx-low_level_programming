#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

int _strlen(char *str);
char *_strcpy(char *dest, char *src);
dog_t *new_dog(char *name, float age, char *owner);

/**
 * _strlen - finds length of string
 * @str: the string to be measured
 * Return: 0
 */
int _strlen(char *str)
{
int len = 0;
while (*str++)
len++;
return (len);
}
/**
 * _strcpy - copies a string pointed to by src,including
 * the terminating null byte, to a buffer pointed to by dest
 * @dest: the buffer storing the strng copy
 * @src: the souce string
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
int index = 0;
for (index = 0; src[index]; index++)
dest[index] = src[index];
dest[index] = '\0';
return (dest);
}
/**
 * new_dog - creates a new dog.
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner: the owner of the dog
 * Return: 0
 */
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *spot;
if (name == NULL || age < 0 || owner == NULL)
return (NULL);
spot = malloc(sizeof(dog_t));
if (spot == NULL)
return (NULL);
spot->name = malloc(sizeof(char) * (_strlen(name) + 1));
if (spot->name == NULL)
{
free(spot);
return (NULL);
}
spot->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
if (spot->owner == NULL)
{
free(spot->name);
free(spot);
return (NULL);
}
spot->name = _strcpy(spot->name, name);
spot->age = age;
spot->owner = _strcpy(spot->owner, owner);
return (spot);
}
