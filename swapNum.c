#include "holberton.h"

/**
 * swapNum - swaps two numbers
 * @x: first number
 * @y: second number
*/

void swapNum(char *x, char *y)
{
	char t;

	t = *x;
	*x = *y;
	*y = t;
}
