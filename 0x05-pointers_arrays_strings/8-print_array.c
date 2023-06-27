#include "main.h"
#include <stdio.h>

/**
 * print_array - Print n element of an array of intrgers
 * @a: Array of integers
 * @n: Number of elements of array to be printed
 * Return: void
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
	printf("%d", a[i]);	
	if (i != (n - 1))
	{
	printf(", ");
	}
	}
	printf("\n");
}
