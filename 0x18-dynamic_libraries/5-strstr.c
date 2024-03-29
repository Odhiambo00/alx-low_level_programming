#include "main.h"

/**
 * *_strstr - locates a substring
 * @haystack: longer string
 * @needle: substring
 * Return: pointer to beginning of located substring or NULL if not found
 */

char *_strstr(char *haystack, char *needle)
{
	int i;
	int s = 0;

	while (needle[s] != '\0')
		s++;
	while (*haystack)
	{
		for (i = 0; needle[i]; i++)
		{
			if (haystack[i] != needle[i])
				break;
		}
		if (i != s)
			haystack++;
		else
			return (haystack);
	}
	return ('\0');
}
