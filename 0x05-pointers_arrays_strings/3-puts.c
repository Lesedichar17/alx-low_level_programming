#include "main.h"

/**
 * _puts - function that prints a string
 * @str:- poniter to the string
 * Return: string and new line
 */

void _puts(char *str)
{
	int i = 0;

	while (str[i])
	{
		_putcahr(str[i]);
		i++;
	}
	_putcahr('\n');
}
