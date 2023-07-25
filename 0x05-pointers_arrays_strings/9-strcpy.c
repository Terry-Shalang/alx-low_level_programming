#include "main.h"

/**
 * _strcpy - copies the string pointed to by src, including the
 * terminating null byte (\0), to the buffer pointed to by dest.
 *
 * @dest: destintion
 * @src: source
 * Return: pointer to destination
 */
char *_strcpy(char *dest, char *src)
{
	int len = _strlen(src);

	int i = 0;

	while (i < len)
	{
		dest[i] = src[i];
		i++;
	}

	dest[i] = '\0';

	return (dest);
}
