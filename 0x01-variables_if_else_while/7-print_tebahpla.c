#include <stdio.h>
/**
  *main - print lower case alphabet in reverse
  *Return: Always 0
  */
int main(void)
{
	int n = 122;

	while (n >= 97)
	{
		putchar(n);
		n--;
	}
	putchar('\n');
	return (0);
}
