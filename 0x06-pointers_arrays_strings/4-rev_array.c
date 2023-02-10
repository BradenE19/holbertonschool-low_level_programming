#include "holberton.h"
/**
 * reverse_array - function that reverses content of an array of integers
 * @a: int
 * @n: int
 * Return: 0
 */
void reverse_array(int *a, int n)
{
	int i, q;

	for (i = 0; i < n; i++)
	{
		n--;
		q = a[i];
		a[i] = a[n];
		a[n] = q;
	}
}
