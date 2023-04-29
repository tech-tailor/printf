#include "main.h"

/**
 * _strlen - gets string length
 * @strg: string
 * Return: length (int)
 */

int _strlen(char *strg)
{
	int length;

	length = 0;
	while (strg[length] != '\0')
	{
		length++;
	}
	return (length);
}
