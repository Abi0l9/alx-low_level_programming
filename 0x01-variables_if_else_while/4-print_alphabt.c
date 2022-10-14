#include <stdio.h>
#include <ctype.h>
/**
 *  main - print alphabets in lowercase followed by a
 *  new line
 *  Return: return 0 for success
 */
int main(void)
{
	int x;

	for (x = 'A'; x <= 'Z'; x++)
	{
		int lower = tolower(x);

		if (lower != 'q' && lower != 'e')
		{
			putchar(lower);
		}

	}
	putchar('\n');
	return (0);
}
