#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - generates random password
 * program 101-crackme.
 * Return: 0 on success, 1 on erro
 */
int main(void)
{
	int sum = 0;
	char c, pass[100];

	int i = 0;

	srand(time(0));
	while (sum <32772)
	{
		c = rand() % 128;
		sum += c;
		if (sum > 2772)
		{
			sum -= c;
			break;
		}
		pass[i] = c;
		i++;
	}
	c = 2772 - sum;
	i++;
	pass[i] = '\0';
	printf("%s\n", pass);

	return (0);
}
