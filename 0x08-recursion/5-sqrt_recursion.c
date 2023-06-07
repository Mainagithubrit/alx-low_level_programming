#include "main.h"

int find_sqrt(int num, int root);
int _sqrt_recursion(int n);

/**
 * find_sqrt - find the square root of a number
 * @num: the number to find the square root of
 * @root: the root to be tested
 * Return: if number does not have a square root return -1
 */

int find_sqrt(int num, int root)
{
if ((root * root) == num)
return (root);

if (root == num / 2)
return (-1);

return (find_sqrt(num, root + 1));
}
/**
 * _sqrt_recursion - returns the square root of a number
 * @n: the number to return the square root
 * Return: If n does not have a natural square root,
 * the function should return -1
 */
int _sqrt_recursion(int n)
{
int root = 0;
if (n < 0)
return (-1);

return (find_sqrt(n, root));
}
