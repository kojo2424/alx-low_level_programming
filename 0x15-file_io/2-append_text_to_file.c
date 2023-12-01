#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * append_text_to_file - a function that appends a text
 * @filename: a name of a file to be append
 * @text_content: text content to be appended
 * Return: 1 or -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	FILE *af;

	int status;

	if (filename == NULL)
	{
		return (-1);
	}
	af = fopen(filename, "a");
	if (af == NULL)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		status = fputs(text_content, af);
		if (status == EOF)
		{
			fclose(af);
			return (-1);
		}
	}
	fclose(af);
	return (1);
}
