#include "main.h"
#include <ctype.h>
/**
 *  _islower - checks for equality between the cases of 2 characters
 *  Return: returns 1 for true or 0 for otherwise
 *  @c: the parameter expected to be received.
 */
int _islower(int c)
{
	int result;
	int ch = c;
	int lower = tolower(ch);

	if (ch == lower)
		result = 1;
	else
		result = 0;
	return (result);
}
