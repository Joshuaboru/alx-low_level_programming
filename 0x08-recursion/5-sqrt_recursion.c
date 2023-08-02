#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: the number to calculate the square root of.
 *
 * Return: the natural square root of n.
 * If n does not have a natural square root,
 * the function returns -1.
 */
int _sqrt_recursion(int n)
{
if (n < 0)
return (-1);
if (n == 0 || n == 1)
return (n);
return (_sqrt_recursion(n, 1));
}

/**
 * _sqrt_recursion_helper - helper function.
 * to calculate the square root recursively.
 * @n: the number to calculate the square root of.
 * @i: the current guess for the square root.
 *
 * Return: the natural square root of n.
 * If n does not have a natural square root,
 * the function returns -1.
 */
int _sqrt_recursion_helper(int n, int i)
{
if (i * i == n)
return (i);
if (i * i > n)
return (-1);
return (_sqrt_recursion(n, i + 1));
}
