#include <stdio.h>
#include "main.h"
/**
 * main - prints the name of the program
 * @argc: number of arguments passed to the function
 * @argv: array of pointers to the arguments
 *
 * Return: Always 0.
 */
int main(int argc __attribute__((unused)), char *argv[])
{
printf("%s\n", argv[0]);
return (0);
}
