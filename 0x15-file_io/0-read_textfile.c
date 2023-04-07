#include "main.h"

/**
 * read_textfile - reads a text file and prints it to standard output
 * @filename: name of letters to be read and printed
 * @letters: number of letters to be read and printed
 *
 * Return: the number of letters printed, or 0 if it failed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	int r, w;
	char *bff;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd < 0)
		return (0);

	bff = malloc(sizeof(char) * letters);
	if (bff == NULL)
		return (0);

	r = read(fd, bff, letters);
	if (r < 0)
	{
		free(bff);
		return (0);
	}
	*(bff + r) = '\0';

	close(fd);

	w = write(STDOUT_FILENO, bff, r);
	if (w < 0)
	{
		free(bff);
		return (0);
	}

	free(bff);
	return (w);
}



