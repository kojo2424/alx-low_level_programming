#include "main.h"
/**
 * swap_int - function that takes two pointers and swaps
 * @a: first varible or pointer
 * @b: second varible or pointer
 */
void swap_int(int *a, int *b)
{
	int var;

	var = *a;
	*a = *b;

	*b = var;
}
