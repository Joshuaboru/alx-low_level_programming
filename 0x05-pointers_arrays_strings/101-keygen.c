#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0.
 */
int main(void)
{
int i;
int length;
char password[100];

srand((unsigned int)time(NULL));

printf("Enter the length of the password: ");
scanf("%d", &length);
for (i = 0; i < length; i++)
{
int random = rand() % 62;

if (random < 10)
{
password[i] = '0' + random;
}
else if (random < 36)
{
password[i] = 'a' + random - 10;
}
else
{
password[i] = 'A' + random - 36;
}
}

printf("Your password is: %s\n", password);

return (0);
}
