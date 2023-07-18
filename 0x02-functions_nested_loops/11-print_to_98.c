#include <stdio.h>

/**
 * main - Check the code
 *
 * Return: Always 0 (success)
 */

void print_to_98(int n)

{
int i;
int n;

if (n <= 98)
{
for (i = n; i < 98; i++)
{
printf("%d, ", i);
}
}
else
{
for (i = n; i > 98; i--)
{
printf("%d, ", i);
}
}
printf("98\n");
return (0);
}
