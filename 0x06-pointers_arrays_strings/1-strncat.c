#include <stdio.h>
#include "main.h"

/**
 * _strncat - concatenates two strings
 * @src: first pointer
 * @dest: second pointer
 * @n: number of bytes to concatenate
 * Return: a pointer to the resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int length, j;

	length = 0

	while (dest[length] != '\0')
	{
		length++;
	}
	for (j = 0; j < n && src[j] != '\0'; j++, length++)
	{
		design[length] = src[j];
	}

	dest[length] = '\0';
	return (dest);
}
