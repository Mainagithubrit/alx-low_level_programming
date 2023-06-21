#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - a function that adds two numbers
 * @a: the first integer
 * @b: the second integer
 * Return; 0
 */

int op_add(int a, int b)
{
return (a + b);
}


/**
 * op_sub - a function that subtracts two numbers
 * @a: the first integer
 * @b: the second integer
 * Return; 0
 */

int op_sub(int a, int b)
{
return (a - b);
}

/**
 * op_mul - a function that multipliess two numbers
 * @a: the first integer
 * @b: the second integer
 * Return; 0
 */

int op_mul(int a, int b)
{
return (a * b);
}

/**
 * op_div - a function that divides two numbers
 * @a: the first integer
 * @b: the second integer
 * Return; 0
 */

int op_div(int a, int b)
{
return (a / b);
}

/**
 * op_mod - a function that returns the reminder of two numbers
 * @a: the first integer
 * @b: the second integer
 * Return; 0
 */

int op_mod(int a, int b)
{
return (a % b);
}
