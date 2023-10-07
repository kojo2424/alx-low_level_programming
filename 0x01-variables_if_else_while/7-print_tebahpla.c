#include <stdio.h>
/**
 * main - Entry point
 * Return:Always 0 (Success)
 */
int main(void)
{
	putchar('z');

	for (char letter = 'y'; letter >= 'a'; letter--)
		putchar(letter);
	putchar('\n');
	return (0);
}
