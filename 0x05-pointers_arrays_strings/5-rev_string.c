#include "main.h"
/**
  *rev_string - function that reverses a string
  * @s: string to be reversed
  * return: always return 0
  */

void rev_string(char *s)
{
	int count = 0, i = 0;

	char last _char;

	while (*s)
	{
		s++;
		count++;
	}
	for (i = 0; i < count; i++)
		s--;
	for (i = 0; i < (count / 2); i++)
	{
		int last = count - i;

		last _char = s[last -i];

		s[last -i] = s[i];

		s[i] = last char
	}
}
