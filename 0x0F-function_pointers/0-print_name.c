#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - a function that prints a name.
 * @name: the name to be printed
 * @f: pointer to function
 * Return: 0
 */
void print_name(char *name, void (*f)(char *))
{
if (!name || !f)
return;
f(name);
}
