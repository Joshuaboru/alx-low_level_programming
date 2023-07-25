#include "main.h"
#include <stdio.h>

/**
 * puts_half - prints half of a string,
 * followed by a new line.
 * @str: pointer to a string
 *
 * Return: void
 */
void puts_half(char *str)
{
int i, len;

for (len = 0; str[len] != '\0'; len++)
;

for (i = (len + 1) / 2; str[i] != '\0'; i++)
_putchar(str[i]);

_putchar('\n');
}
