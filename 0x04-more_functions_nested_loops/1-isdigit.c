#include "main.h"
/**
 * _isdigit - checks for digit (0 through 9)
 * @c: c - Variable
 *
 * Return: Always 0 (success)
 */
int _isdigit(int c)
{
if (c >= 48 && c <= 57)
{
return (1);
}
return (0);
}
