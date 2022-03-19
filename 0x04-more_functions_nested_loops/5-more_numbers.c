#include "main.h"

/**
 * more_numbers - prints 10 times from 0 to 14,by a new line
 * Return: 0
 */
void more_numbers(void)
{
	int i, j;

	for (i = 0; i <= 10; i++)
	{
		j = 0;

		for (j = 0; j <= 14; j++)
		{
			_putchar(j);
		}
	}
	_putchar('\n');
}
