#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - This progam assigns a random number to the value of n anytime
 * it executes and also tell if n is positive, negative or zero
 * Return: 0 if (successful)
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
