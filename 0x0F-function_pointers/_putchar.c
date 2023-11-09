#include <unistd.h>
#include "function_pointers.h"
/**
 * _putchar - function that prints
 * @c: character to be printed
 */
int _putchar(char c)
{
	return(write(1, &c, 1));
}
