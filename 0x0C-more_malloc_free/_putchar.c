#include "main.h"
#include <unistd.h>
/**
 * _putchar - Function to print
 * @c: the character to print
 * Return: anything
 */
int _putchar(char c)
{
	return(write(1, &c, 1));
}
