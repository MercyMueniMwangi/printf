#include "holberton.h"

/**
 * swap - swaps two numbers
 * @x: first number
 * @y: second number
*/

void swapNum(char *x, char *y) 
{
	char t = *x; *x = *y; *y = t;
}
