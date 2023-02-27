#include "main.h"
/**
  *_strlen - length of a string
  * @s: string of characters
  *Return: Always return 0
  */
int _strlen(char *s)
{
	int count = 0;

	while (s[count] != '\0')
		count++;
	return (count);
}
