#include "main.h"

/* Write a function that swaps the values of two integers.*/

void swap_int(int *a, int *b)
{
	int p, q;

	p = *a;
	q = *b;
	*a = q;
	*b = p;
}

