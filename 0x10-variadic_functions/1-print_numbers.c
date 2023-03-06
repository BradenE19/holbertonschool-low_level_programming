#include <stdarg.h>
#include "variadic_functions.h"

/**
 *
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list printed;
	unsigned int i;

	va_start(printed, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(printed, int));

		if (i != n - 1 && seperator != NULL)
			printf("%s", seperator);
	}
	va_end(printed);
	printf("\n");
}
