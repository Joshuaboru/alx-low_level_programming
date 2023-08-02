#include "main.h"
#include <stdio.h>

/**
 * _sqrt_recursion - Returns the natural square root of a number.
 * @n: number to calculate the square root of.
 *
 * Return: the natural square root of a number.
 * if n does not have a natural
 * square root, the function returns -1.
 */
int _sqrt_recursion(int n)
{
return (_sqrt(n, 1));
}

/**
 * _sqrt - Calculates natural square root
 * @n: number to calculate the square root of.
 * @i: iterate number
 *
 * Return: the natural square root of a number. If n does not have a natural
 * square root, the function returns -1.
 */

int _sqrt(int n, int i)
{
int sqrt = i * i;
if (sqrt > n)
return (-1);
if (sqrt == n)
return (i);
return (_sqrt(n, i + 1));
}
