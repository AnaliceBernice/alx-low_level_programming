#include "main.h"

/**
 * print_line - draw a straight line
 * @n: parameter
 */

void print_line(int n)
{
	int i = 1;

	while (i <= n)
	{
		_putchar('_');
		i++;
	}
	_putchar('\n');
}
