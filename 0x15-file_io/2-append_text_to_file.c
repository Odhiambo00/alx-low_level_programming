#include "main.h"
#include <string.h>

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: name of the file that text will be appended to
 * @text_content: content to be appended into the file
 *
 * Return: 1 if file exists or -1 if does not exist
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int r;
	int w;

	if (filename == 0)
	{
		return (-1);
	}

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd < 0)
	{
		return (-1);
	}

	if (text_content)
	{
		r = strlen(text_content);

		w = write(fd, text_content, r);

		if (w == -1)
		{
			return (-1);
		}
	}

	close(fd);

	return (1);
}

