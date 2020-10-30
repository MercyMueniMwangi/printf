#include "holberton.h"

/**
 * revString - function to reverse buffer
 * @buffer: buffer to be reversed
 * @i: first iterator
 * @j: second interator
 * Return: reversed string
*/

// function to reverse buffer[i..j]
char* revString(char *buffer, int i, int j)
{
	while (i < j)
		swapNum(&buffer[i++], &buffer[j--]);

	return buffer;
}
