#include "main.h"
#include <stdlib.h>

/**
 * _calloc - function that allocates memory for an array using malloc.
 * @nmemb: number of elements in the array.
 * @size: size of each element.
 *
 * Return: pointer to the allocated memory.
 * The memory is set to zero.
 * If nmemb or size is 0, then _calloc returns NULL.
 * If malloc fails, then _calloc returns NULL.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
char *ptr;
unsigned int i;
if (nmemb == 0 || size == 0)
return (NULL);
ptr = malloc(nmemb * size);
if (ptr == NULL)
return (NULL);
for (i = 0; i < nmemb * size; i++)
ptr[i] = 0;
return ((void *)ptr);
}
