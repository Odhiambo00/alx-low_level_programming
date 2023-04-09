#include "main.h"
#include <string.h>

/**
 * create_file - creates a file and fills it with text
 * @filename: name of the file to be created
 * @text_content: content to be written in the file created
 *
 * Return: 1 if success, -1 if it failed
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	int r;
	int w;

	if (filename == 0)
	{
		return (-1);
	}

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd < 0)
	{
		return (-1);
	}

	if (text_content == NULL)
	{
		text_content = "";
	}

	r = strlen(text_content);

	w = write(fd, text_content, r);

	if (w == -1)
	{
		return (-1);
	}

	close(fd);

	return (1);
}



