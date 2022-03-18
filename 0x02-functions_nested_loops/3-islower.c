#include "main.h"
/**
 * _islower - checks for upper and lower case letters
 * _putchar - writes the answers
 * @c: character
 * Return: Always 0 (Success)
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

