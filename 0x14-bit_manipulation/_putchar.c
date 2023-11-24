#include "main.h"
#include <unistd.h>
/**
 * _putchar - it prints characters
 * @c: character to be printed
 * Return: 1 or 0
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
