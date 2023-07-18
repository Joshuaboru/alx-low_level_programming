#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */

int main(void)
{

int i;
long long int fib[50];
long long int sum = 0;

fib[0] = 1;
fib[1] = 2;

for (i = 2; i < 50; i++)
{
fib[i] = fib[i - 1] + fib[i - 2];
if (fib[i] > 4000000)
{
break;
}
if (fib[i] % 2 == 0)
{
sum += fib[i];
}
}
printf("%lld\n", sum);
return (0);
}
