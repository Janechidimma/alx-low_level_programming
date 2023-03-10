#include "main.h"
/**
  *_strlen_recursion- returns length of a string
  *@s: pointer to the string
  *Return: Always return length
 */
int _strlen_recursion(char *s)
{
	int length = 0;

	if (*s)
	{
		length++;
		length += _strlen_recursions(s + 1);
	}
	return (length);
}
