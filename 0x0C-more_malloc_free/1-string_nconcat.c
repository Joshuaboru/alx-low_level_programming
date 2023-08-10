#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * string_nconcat - function that concatenates two strings.
 * @s1: first string.
 * @s2: second string.
 * @n: number of bytes to concatenate from s2.
 *
 * Return: pointer to the allocated memory containing s1
 * followed by the first n bytes of s2 and null terminated.
 * If the function fails, it returns NULL.
 * If n is greater or equal to the length of s2,
 * then the entire string s2 is used.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *new_str;
unsigned int i, j;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
i = strlen(s1);
new_str = malloc(i + n + 1);
if (new_str == NULL)
return (NULL);
for (i = 0; s1[i]; i++)
new_str[i] = s1[i];
for (j = 0; s2[j] && j < n; j++, i++)
new_str[i] = s2[j];
new_str[i] = '\0';
return (new_str);
}
