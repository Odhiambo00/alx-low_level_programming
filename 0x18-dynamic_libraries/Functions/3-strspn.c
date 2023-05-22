#include "main.h"

/**
 * _strspn - gets the length of prefix substring
 * @s: segemnt the bytes will be returned from
 * @accept:: bytes to include
 * Return: numbero fbytes in initial segment
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, j;
	int len = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] != 32)
		{
			for (j = 0; accept[j] != '\0'; j++)
			{
				if (s[i] == accept[j])
					len++;
			}
		}
		else
			return (len);
	}
	return (len);
}
