#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * main - prints the opcodes of its own main function.
 * @argc: number of arguments passed to the function.
 * @argv: array of pointers to the arguments.
 *
 * Return: 0 on success, 1 on incorrect number of arguments,
 * 2 if number of bytes is negative.
 */
int main(int argc, char **argv)
{
int i, bytes;

if (argc != 2)
{
printf("Error\n");
exit(1);
}
bytes = atoi(argv[1]);
if (bytes < 0)
{
printf("Error\n");
exit(2);
}
for (i = 0; i < bytes; i++)
printf("%02x%c", *((unsigned char *)main + i), i == bytes - 1 ? '\n' : ' ');
return (0);
}
