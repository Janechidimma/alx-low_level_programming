#include "main.h"

/**
 *jack_bauer - pribts every minute of the day of jack from 00.00.
 *Return: Always return 0
  */
void jack_bauer(void)
{
	int n;
	int m;

	n = 0;
	while (n < 24)
	{
		m = 0;
		while (m < 60)
		{
			_putchar((n / 10) + '0');
			_putchar((n % 10) + '0');
			_putchar(':');
			_putchar((m / 10) + '0');
			_putchar((m % 10) + '0');
			_putvhar('\n');
			m++
		}
		n++
	}
}
