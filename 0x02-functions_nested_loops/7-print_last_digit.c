#include "main.h"

/**
 *print_last_digit - prints the last digit of a number
 *@l: interger to be checked
 *Return: Always 0
  */
int print_last_digit(int l)
{
	int l;

	l = n % 10;
	if (l <= 0)
	{
		_putchar(-l + 48);
		return (-l);
	}
	else
	{
		_putchar(l + 48);
		return (l);
	}
}
