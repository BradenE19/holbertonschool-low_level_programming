#include <stdio.h>
#include "main.h"
/**
 * print_alphabet - check the code for Holberton School students.
 *
 * Return: Always 0.
 */

void print_alphabet(void)
{
char alphabet;
for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
putchar(alphabet);
putchar('\n');
}
