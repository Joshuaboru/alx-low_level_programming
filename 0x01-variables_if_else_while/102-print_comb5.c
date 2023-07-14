#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (success)
 */

int main(void)
{
int i, j;

for (i = 0; i < 100; i++)
{
for (j = i; j < 100; j++)
{
int first_digit_i = i / 10;
int second_digit_i = i % 10;
int first_digit_j = j / 10;
int second_digit_j = j % 10;
putchar(first_digit_i / 10 + '0');
putchar(first_digit_i % 10 + '0');
putchar(second_digit_i / 10 + '0');
putchar(second_digit_i % 10 + '0');
putchar(' ');
putchar(first_digit_j / 10 + '0');
putchar(first_digit_j % 10 + '0');
putchar(second_digit_j / 10 + '0');
putchar(second_digit_j % 10 + '0');
if (!(i == 99 && j == 99))
{
putchar(',');
putchar(' ');
}
}
}
return (0);
}
