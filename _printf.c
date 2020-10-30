#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>
#include "holberton.h"


int _printf(const char *format, ...)
{
	int count = 0;
	char *str;
	va_list args;

	va_start(args, format);
	
	while(*format)
	{
		if(*format == '%')
		{
			format++;
			switch(*format)
			{
				case 's':
					str = va_arg(args, char *);
					fputs(str, stdout);
					format++;
					count += strlen(str);
					break;
				case '%':
					putchar('%');
					format++;
					count++;
					break;
				case 'c':
					str = va_arg(args, char *);
					fputs(str, stdout);
					format++;
					count++;				
					break;
				default:
					putchar('%');
					putchar(*format);
					format++;
					count +=2;
			}
		}
		else
		{
			putchar(*format);
			format++;
			count++;
		}
	}
	va_end(args);
	return count;
}
