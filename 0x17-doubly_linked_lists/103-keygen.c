#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * main - generates a key depending on username of crackme5
 * @argc: number of arguments
 * @argv: arguments passed
 * Return: 0 if success, 1 if error
 */

int main(int argc, char *argv[])
{
	size_t i, len;
	unsigned int b, add;
	char *l = "A-CHRDw87lNS0E9B2TibgpnMVys5XzvtOGJcYLU+4mjW6fxqZeF3Qa1rPh\
		   dKIouk";
	char p[7] = "      ";

	if (argc != 2)
	{
		printf("Correct usage: ./keygen5 username\n");
		return (1);
	}
	len = strlen(argv[1]);
	p[0] = l[(len ^ 59) & 63];

	add = 0;
	for (i = 0; i < len; i++)
		add += argv[1][i];
	p[i] = l[(add ^ 79) & 63];

	b = 1;
	for (i = 0; i < len; i++)
		b *= argv[1][i];
	p[2] = l[(b ^ 85) & 63];

	b = (unsigned int)argv[1][0];
	for (i = 0; i < len; i++)
	{
		if ((unsigned int)argv[1][i] >= b)
			b = (unsigned int)argv[1][i];
	}
	srand(b ^ 14);
	p[3] = l[rand() & 63];

	b = 0;
	for (i = 0; i < (unsigned int)argv[1][0]; i++)
		b = rand();
	p[5] = l[(b ^ 229) & 63];

	printf("%s\n", p);
	return (0);
}
