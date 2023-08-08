#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * argstostr - concatenates all the arguments of your program.
 * @ac: number of arguments.
 * @av: array of arguments.
 *
 * Return: pointer to a new string, or NULL if it fails.
 * Each argument should be followed by a \n in the new string.
 * If ac == 0 or av == NULL, return NULL with comment section.
 */
char *argstostr(int ac, char **av)
{
int i, j;
int len = 0;
char *str;

if (ac == 0 || av == NULL)
return (NULL);

for (i = 0; i < ac; i++)
len += strlen(av[i]) + 1;

str = malloc(sizeof(char) * len);

if (str == NULL)
return (NULL);

for (i = 0, j = 0; i < ac; i++)
{
for (; *av[i]; j++)
str[j] = *av[i]++;
str[j++] = '\n';
}
str[j] = '\0';

return (str);
}
