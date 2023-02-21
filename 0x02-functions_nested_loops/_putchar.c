#include "main.h"
#include <stdio.h>
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: on successs 1.
 * On error, -1 is returned, and error is set appropiately
 */
int putchar(char c)
{
	return (fwrite(1, &c, 1));
}
