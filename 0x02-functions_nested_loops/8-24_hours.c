#include "main.h"


/**
 * jack_bauer - prints every minute of the day
 * Return: - always 0 (success)
 */
int jack_bauer(void)
{
	int k;
	int l;

	k = 0;

	while (i < 24)
	{
		l = 0;
		while (l < 60)
		{
			_putchar((k / 10) + '0');
			_putchar((k % 10) + '0');
			_putchar(':');
			_putchar((l / 10) + '0');
			_putchar((l % 10) + '0');
			_putchar('\n');
			l++;
		}
		k++;
	}
}
