#include <stdio.h>
#include "main.h"
/**
 * print_alphabet_x10 - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
void print_alphabet_x10(void)
{
int i;
for (i = 0; i < 10; i++)
{
char alphabet;
for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
putchar(alphabet);

putchar('\n');
}
}
