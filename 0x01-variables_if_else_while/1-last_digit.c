#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */
/**
 *  main - prints a string based on the input
 *  Return: Always return a 0 for success.
 */

/* betty style doc for function main goes there */
int main(void)
{
	int n;
	int last_digit;
	char str[] = "Last digit of ";

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	last_digit = n % 10;

	printf("%s%d is %d and is ", str, n, last_digit);
	if (last_digit > 5)
		printf("greater than 5\n");
	else if (last_digit == 0)
		printf("0\n");
	else if (last_digit < 6 && last_digit != 0)
		printf("less than 6 and not 0");
	return (0);
}
