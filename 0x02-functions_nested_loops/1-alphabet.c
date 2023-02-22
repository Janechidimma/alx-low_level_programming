#include <stdio.h>
#include "main.h"

/**
  *print_alphabet - print lower case alphabets
  *Return: Always 0 (success)
  */
void print_alphabet(void)
{
	int n = 97;

	while (n <= 122)
	{
		_putchar(n);
		n++;
	}
	putchar('\n');
}
