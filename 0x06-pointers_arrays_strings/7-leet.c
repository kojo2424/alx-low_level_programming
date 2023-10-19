#include "main.h"
/**
 * leet - this a function for the solution
 * @s: this is the character
 * Return: start
 */
char *leet(char *s)
{
	char *start = s;
	char letters[] = "aAeEoOtTlL";
	char codes[] = "4433007711";

	int i = 0;

	while (*s != '\0')
	{
		i = 0;
		if (*s == letters[i])
		{
			*s = codes[i];
		}
		else
		{
			while (i < 10)
			{
				i++;
				if (*s == letters[i])
				{
					*s = codes[i];
					break;
				}
			}
		}
		s++;
	}
	return (start);
}


