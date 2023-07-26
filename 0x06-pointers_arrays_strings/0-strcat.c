#include "main.h"
#include "string.h"

/**
 * _strcat - concatenates two strings
 * @dest: destination string
 * @src: source string
 *
 * Return: pointer to resulting string dest
 */
char *_strcat(char *dest, char *src)
{
char *ptr = dest + strlen(dest);
while (*src != '\0')
{
*ptr++ = *src++;
}
*ptr = '\0';
return (dest);
}
