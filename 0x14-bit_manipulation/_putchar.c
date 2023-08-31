#include "main.h"
#include <unistd.h>
/**
 * _putchar - this does write the character c to stdout
 * @c: this refers to the character to print
 *
 * Return: 1 when succesful.
 * On error, return  -1, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
