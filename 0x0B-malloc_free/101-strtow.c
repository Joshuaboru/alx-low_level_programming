#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * strtow - splits a string into words.
 * @str: string to split.
 *
 * Return: pointer to an array of strings (words).
 * Each element of this array should contain a single word,
 * null-terminated.
 * The last element of the returned array should be NULL.
 * Words are separated by spaces.
 * Returns NULL if str == NULL or str == "".
 * If your function fails, it should return NULL.
 */
char **strtow(char *str)
{
char **words = NULL;
int i, j, k, len, count;

if (str == NULL || *str == '\0')
return (NULL);

count = 0;
for (i = 0; str[i] != '\0'; i++)
{
if (str[i] != ' ' && (i == 0 || str[i - 1] == ' '))
count++;
}

words = malloc(sizeof(char *) * (count + 1));
if (words == NULL)
return (NULL);

for (i = 0, j = 0; str[i] != '\0'; i++)
{
if (str[i] != ' ' && (i == 0 || str[i - 1] == ' '))
{
len = 0;
for (k = i; str[k] != '\0' && str[k] != ' '; k++)
len++;

words[j] = malloc(sizeof(char) * (len + 1));
if (words[j] == NULL)
{
for (k = 0; k < j; k++)
free(words[k]);
free(words);
return (NULL);
}
strncpy(words[j], &str[i], len);
words[j][len] = '\0';
j++;
}
}
words[j] = NULL;
return (words);
}
