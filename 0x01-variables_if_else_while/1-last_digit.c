#include <stdlib.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - Entry
 * Return: Always 0
 */
int main(void)
{
	int n;
	int a;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	a = n % 10;

	if (a > 5)
	{
		printf("The last digit of %d is %d  and is greater than 5\n", a);
	}
	else if (a == 0)
	{
		printf("The last digit of %d is %d and is 0\n", n, a);
	}
	else
	{
		printf("The last digit of %d is %d and is less than 6 and not 0\n", n, a);
	}
	return (0);
