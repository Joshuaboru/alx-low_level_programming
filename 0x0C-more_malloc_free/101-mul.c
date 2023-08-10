#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _isdigit - checks if a string is a digit
 * @s: string to check
 *
 * Return: 1 if s is a digit, 0 otherwise
 */
int _isdigit(char *s)
{
while (*s)
{
if (*s < '0' || *s > '9')
return (0);
s++;
}
return (1);
}

/**
 * main - multiplies two positive numbers
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 on success, 98 on failure
 */
int main(int argc, char **argv)
{
int i, j;
char *num1, *num2;
if (argc != 3)
{
printf("Error\n");
return (98);
}
num1 = argv[1];
num2 = argv[2];
if (!_isdigit(num1) || !_isdigit(num2))
{
printf("Error\n");
return (98);
}
for (i = 0; num1[i]; i++)
;
for (j = 0; num2[j]; j++)
;
for (i--; i >= 0; i--)
{
int carry = 0;
for (j--; j >= 0; j--)
{
int res = (num1[i] - '0') * (num2[j] - '0') + carry;
int tmp = res % 10;
carry = res / 10;
num2[j] = tmp + '0';
}
if (carry)
printf("%d", carry);
printf("%s", &num2[j + 1]);
for (j = 0; num2[j]; j++)
num2[j] = '0';
}
printf("\n");
return (0);
}
