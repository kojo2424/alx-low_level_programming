#include "main.h"
/**
 * reverse_array - the function thar reverse strings
 * @a: 1st integer
 * @n: 2nd integer
 */
void reverse_array(int *a, int n)
{
	int *start = a;
	int *end = a + n - 1;

	while (start < end)
	{
		int temp = *start;
		*start = *end;
		*end = temp;

		start++;
		end--;
	}
}
