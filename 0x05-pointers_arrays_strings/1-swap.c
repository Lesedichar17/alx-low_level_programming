#include "main.h"

/**
 * swap_int - take in two variables integers and swaps them
 * @a: swaps and stores address of b
 * @b: swaps and stores address of a
 * Retuen: 0
 */

void swap_int(int *a, int *b)
{
	int change;
	change = *b;
	*b = *a;
	*a = change;
}
