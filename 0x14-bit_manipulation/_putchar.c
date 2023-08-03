#include "main.h"
#include <unistd.h>

/**
* _putchar -this does write the character c to stdout
* @c: This shows the character to be printed
*
* Return: show 1 when succesful.
* when there is an error -1 is returned, errno is appropriately set.
*/
int _putchar(char c)
{
	return (write(1, &c, 1));
}
