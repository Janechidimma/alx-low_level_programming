#include "main.h"
/**
  * print_rev - print a string of characters ireverse
  * @s: string to be printed
  * Return : always return 0
  */
void print_rev(char *s)
{
	int count = 0;

	while (*s)
	{
		s++;
		count++;
	}
	while (count)
	{
		s--;
		_putchar(*s);
		count--;
	}
	_putchar('\n');
}

