#include "main.h"
/**
 * _isalpha - prints 1 or 0
 * Return: returns 0 for success
 * @c : any parameter
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
