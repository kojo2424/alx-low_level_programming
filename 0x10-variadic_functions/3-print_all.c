#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_all - a function that prints all
 * @format: a format to be printed
 */
void print_all(const char * const format, ...)
{
	va_list args;

	char *sep = "";

	int i = 0;
	char *s;
	char c;
	int n;
	float f;

	va_start(args, format);

	while (format[i])
	{
		switch (format[i])
		{
			case 'c':
				c = va_arg(args, int);
				printf("%s%c", sep, c);
				break;
			case 'i':
				n = va_arg(args, int);
				printf("%s%d", sep, n);
				break;
			case 'f':
				f = va_arg(args, double);
				printf("%s%f", sep, f);
				break;
			case 's':
				s = va_arg(args, char *);
				if (s == NULL)
					s = "(nil)";
				printf("%s%s", sep, s);
				break;
		}
		sep = ",";
		i++;
	}
	printf("\n");
	va_end(args);
}
