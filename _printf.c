#include <stdio.h>
#include <stdarg.h>
#include <string.h>
#include "holberton.h"
int _printf(const char *format, ...)
{
	unsigned int count = 0;
	char *str;
	char *ch;
	va_list args;

	va_start(args, format);
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			switch (*format)
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
					count = va_arg(args, int);
					putchar(count);
					break;
				default:
					putchar('%');
					putchar(*format);
					format++;
					count += 2;
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
	return (count);
}
