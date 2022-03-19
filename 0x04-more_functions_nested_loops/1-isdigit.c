#include "main.h"

/**
 * _isdigit - checks for a number from 0 - 9
 * @c: is an integer
 * Return: 0 success
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
		return (0);
}
