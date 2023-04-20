#include "variadic_functions.h"
/**
 * print_numbers - prints numbers
 * @separator: pointer to the separator
 * @n: no. of numbers
 * @...: numbers
 * Return: None
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list nums;
	unsigned int i;

	if (separator == NULL)
		return;
	va_start(nums, n);
	for (i = 0; i < n; i++)
	{
		if (i == n - 1)
		{
			printf("%d\n", va_arg(nums, int));
			break;
		}
		printf("%d%s", va_arg(nums, int), separator);
	}
}
