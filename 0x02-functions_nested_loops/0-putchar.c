#include <stdio.h>

/**
 *  main - prints a string using putchar to the standard output
 *  Return: returns a 0 for successful compilation.
 */
int main(void)
{
	char n[] = "putchar";
	int i;

	for (i = 0; i <= 7; i++)
	{
		putchar(n[i]);
	}
	putchar('\n');
	return (0);
}
