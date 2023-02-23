#include "main.h"

/**
  *_isalpha - checks if the character is an alphabet
  *@c: constant integer
  *Return: 1 for alphabets else 0
  */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n')
}
