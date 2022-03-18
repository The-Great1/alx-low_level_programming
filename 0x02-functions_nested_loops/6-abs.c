#include "main.h"
/**
 * _abs - function converts integers to absolute values
 * @x: character
 * Return: 0
 */
int _abs(int x)
{
	if (x > 0)
	{
		return (x);
	}
	else if (x < 0)
	{
		return (x = x * -1);
	}
	else
	{
		return (0);
	}
}

