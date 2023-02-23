#include "main"

/**
  *_islower - checks for lower case character
  *
  *@c: a lowwer case letter constant integer
  *Return: Return 1 for lower cas else 0
  */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
