#include "variadic_functions.h"
/**
 * print_all - print every kind of data
 * @format: elements representing types
 * @...: variable parameters
 * Return: nothing
 */
void print_all(const char * const format, ...)
{
	va_list data;
	int i;
	char *a;
	char *separator;

	i = 0;
	separator = "";
	va_start(data, format);
	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
				printf("%s%c", separator, va_arg(data, int));
				break;
				case 'i':
				printf("%s%d", separator, va_arg(data, int));
				break;
				case 'f':
				printf("%s%f", separator, va_arg(data, double));
				break;
				case 's':
				a = va_arg(data, char *);
				if (a == NULL)
					a = "(nil)";
				printf("%s%s", separator, a);
				break;
				default:
				i++;
				continue;
			}
			separator = ", ";
			i++;
		}
	}
	printf("\n");
	va_end(data);
}

