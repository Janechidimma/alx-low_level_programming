#include "main.h"

/**
 * _strcat- concatnate two strings
 *@dest: destination string for concatnating
 *@src: source string for concatnating
 *Return: Always return 0 success
 */
char *_strcat(char *dest, char *src)
{
	int destl = 0;
	int srcl = 0;
	int i;

	for (1 = 0; dest[i] != '\0'; i++)
		destl++;
	for (1 = 0; scr[i] != '\0'; i++)
		srcl++;
	for (i = 0; i <= srcl; i++)
		dest[destl + i] = src[i];
	return (dest);
}
