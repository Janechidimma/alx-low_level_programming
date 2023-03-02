#include "main.h"

/**
  *_strncat - concatenate 2 strings
  *@dest: destination of string
  *@src: source file for string
  *@n: number of charachters to be appended
  *Return: dest
  */
char *_strncat(char *dest, char *src, int n)
{
	int destl = 0;
	int srcl = 0;
	int i;

	for (i = 0; dest[i] != '\0'; i++)
		destl++;
	for (i = 0; src[i] != '\0'; i++)
		srcl++;
	for (i = 0; i < n; i++)
		dest[destl + i] = src[i];
	return (dest);
}
