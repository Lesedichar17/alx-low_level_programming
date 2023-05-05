#include <unistd.h>

/**
 * putchar - writes the character to c to stdout
 * @c: The character to print
 *
 * Return: Pn success 1.
 * On erro, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
