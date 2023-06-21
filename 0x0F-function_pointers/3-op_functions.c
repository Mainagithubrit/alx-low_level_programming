#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - Returns the sum of two numbers
 * @a: the first integer
 * @b: the second integer
 * Return: 0
 */

int op_add(int a, int b)
{
return (a + b);
}


/**
 * op_sub - Returns the difference of two numbers
 * @a: the first integer
 * @b: the second integer
 * Return: 0
 */

int op_sub(int a, int b)
{
return (a - b);
}

/**
 * op_mul - Returns the product of two numbers
 * @a: the first integer
 * @b: the second integer
 * Return: 0
 */

int op_mul(int a, int b)
{
return (a * b);
}

/**
 * op_div - Returns the division of two numbers
 * @a: the first integer
 * @b: the second integer
 * Return: 0
 */

int op_div(int a, int b)
{
return (a / b);
}

/**
 * op_mod - Returns the reminder of two numbers
 * @a: the first integer
 * @b: the second integer
 * Return: 0
 */

int op_mod(int a, int b)
{
return (a % b);
}
