#include "main.h"

/**
 * main - Entry point,print_alphabet_x10 - prints the alphabet in lowercase followed by a new line 10 times
 * Return: Always 0 (success)
 */

void print_alphabet_x10(void)
{

char ch;
int i;
i = 0;
while (i < 10)
{
for (ch = 'a'; ch <= 'z'; ch++)
{
_putchar(ch);
}
_putchar('\n');
i++;
}
return (0);
}
