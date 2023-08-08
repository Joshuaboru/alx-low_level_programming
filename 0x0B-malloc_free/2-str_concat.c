#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * str_concat - concatenates two strings of any size.
 * @s1: the first string to concatenate.
 * @s2: the second string to concatenate.
 *
 * Return: The two strings concatenate.
 */

char *str_concat(char *s1, char *s2)
{
char *new_str;
size_t len1 = 0, len2 = 0;

if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";

len1 = strlen(s1);
len2 = strlen(s2);

new_str = malloc(len1 + len2 + 1);
if (new_str == NULL)
return (NULL);

strcpy(new_str, s1);
strcat(new_str, s2);

return (new_str);
}
