#include "main.h"
#include <unistd.h>
/**
 * _putchar - this does write to stdout the character c.
 * @c: refers to the printable character 
 *
 * Return: return 1 On success.
 * On error, return -1 , and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
