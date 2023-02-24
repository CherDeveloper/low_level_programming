#include "main.h"
#include <stdio.h>

/**
 * print_numbers - print numbers between 0 to 9 incl.
 *
 * Reurn: Void.
 */
void print_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		_putchar(i + '0');
	}
	_puchar('\n');
}
