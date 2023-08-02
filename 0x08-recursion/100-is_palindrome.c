#include "main.h"
#include "string.h"
/**
 * is_palindrome - checks if a string is a palindrome.
 * @s: the string to check.
 *
 * Return: 1 if the input string is a palindrome, otherwise return 0.
 */
int is_palindrome(char *s)
{
int i = 0;
int j = strlen(s) - 1;

while (i < j)
{
if (s[i] != s[j])
return (0);
i++;
j--;
}

return (1);
}
