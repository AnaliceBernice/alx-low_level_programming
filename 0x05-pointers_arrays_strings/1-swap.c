#include <stdio.h>
#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * @a: first parameter
 * @b: second parameter
 * int c: addressed the swapped value will be sent to
 * Return: 0
 */

void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}
