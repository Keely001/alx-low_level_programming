#include "variadic_functions.h"
/**
 * prints_strings - prints strings
 * @separator: the separator
 * @n: no of parameters
 * @...: the parameter
 * Return: none
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list par;
	char *s;
	unsigned int i;

	va_start(par, n);
	for(i = 0; i < n; i++)
	{
		s = va_arg(par, char*);
		if (s == NULL)
			printf("(nill)");
		else
			printf("%s", s);
		if (i < n - 1 && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(par);
}
