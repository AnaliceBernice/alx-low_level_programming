#include <stdio.h>

/**
 * main - prints all single digit numbers of base ten starting from zero
 *
 * Return: 0
 */

int main(void)
{
	int c;

	c = 0;
	while
		(c < 10) {
			putchar(c + '0');
			c++;
		}
	putchar('\n');
	return (0);
}