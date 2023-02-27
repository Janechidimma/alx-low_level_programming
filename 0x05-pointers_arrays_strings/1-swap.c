#include "main.h"
/**
  *swap_int - swap between two numbers
  *@a: character to be swapped
  *@b: character to be swapped
  * return: Aleays return void
  */
void swap_int(int *a, int *b)
{
	int temp = *a;

	*a = *b;
	*b = temp;
}
