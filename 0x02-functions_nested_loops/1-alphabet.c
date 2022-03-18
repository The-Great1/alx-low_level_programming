#include "main.h"
/**
 * print_alphabet - Functions to print small letters
 * Description: prints alphabet with putchar
 * Return: 0
 */

void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}

