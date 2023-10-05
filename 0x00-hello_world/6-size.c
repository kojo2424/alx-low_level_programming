#include <stdio.h>
/**
 * main - A program that prints the sizes of various types on computer
 * Return: 0 (Success)
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;

	printf("Size of a char:"sizeof(a));
	printf("Size of an int:"sizeof(b));
	printf("Size of a long int:"sizeof(c));
	printf("Size of a long long int:"sizeof(d));
	printf("Size of a float:"sizeof(f));
	return (0);
}
