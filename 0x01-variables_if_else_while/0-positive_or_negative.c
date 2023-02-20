#include <stdlib.h>
#include <time.h>
#include <stdio.h>


/**
 * main - assign a random number to variable in each time
 * it executes and print it
 * Return: Always 0 (succes)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	else if (n < 0)
		printf("%d is negative\n", n);
	return (0);
}
