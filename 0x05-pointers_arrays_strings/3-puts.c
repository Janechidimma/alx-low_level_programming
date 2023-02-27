#include "main.h"
/**
  *_puts- prints a string to standard output
  *@str :  string of characters to be printed
  * Return: Always return 0
  */
void _puts(char *str)
{
	while (*str)

	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
