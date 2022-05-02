#include "main.h"
#include <stdlib.h>

/**
 * create_file - creates a text file
 * @filename: pointer to a textfile
 * @text_content: file content
 * Return: integer
 */
int create_file(const char *filename, char *text_content)
{
	int o, r, len;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}
	o = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	r = write(o, text_content, len);

	if (o == -1 || r == -1)
		return (-1);
	close(o);
	return (1);
}
