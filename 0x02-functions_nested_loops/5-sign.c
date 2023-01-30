#include <stdio.h>
#include "main.h"
/**
 * print_sign - check the code for Holberton School students.
 * @n: is a int variable
 * Return: Always 0.
 */
int print_sign(int n)
{
if (n < 0)
{
putchar('-');
return (-1);
}
else
{

if (n == 0)
{
putchar('0');
return (0);
}
else
putchar('+');
return (1);
}
}
