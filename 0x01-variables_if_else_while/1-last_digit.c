#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - Entry point
 * Description: Prints the last digit of a randomly generated number and check if the number is greater than 5, less than 6 or 0
 *
 * return: Always 0
 */
int main(void)
{
	int n;
	int check;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	check = n % 10;
	if (check > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, check);
	}
	else if (check == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, check);
	}
	else
	{
		printf("Last digit of %d is %d and is  less than 6 and not 0\n", n, check);
	}
	return (0);
}
