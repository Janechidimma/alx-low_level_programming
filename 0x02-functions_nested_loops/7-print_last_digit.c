#include "main.h"

/**
 *print_last_digit - prints the last digit of a number
 *@l: interger to be checked
 *Return: Always 0
  */
int print_last_digit(int l)
{
int a;

if (l < 0)
l = -l;
a = l % 10;
if (a < 0)
	a = -a;
_putchar(a + '0');
return (a);
}
