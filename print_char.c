#include "main.h"

/**
 * ch - function to return char
 * @character: list given
 * Return: number of char printed
 */
int ch(va_list s)
{
	return (_putchar(va_arg(s, int)));
}
