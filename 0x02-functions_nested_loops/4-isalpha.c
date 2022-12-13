#include "main.h"

/**
 * _isalpha - checks for alphabet, either lowercase or uppercase
 * @c: unsigned int value to be compared with ASCII value
 * Return: 1 if character is a letter, 0 if otherwise
 */

int _isalpha(int c)
{
	if (c >= 65 && c <= 122)
		return (1);
	else
		return (0);
}
