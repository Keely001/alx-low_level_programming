#include "function_pointers.h"
/**
 * print_name - prints name.
 * @name: pointer to name
 * @f: function pointer
 * Return: None
 */
void print_name(char *name, void (*f)(char *))
{
	char *a;

	a = name;
	(*f)(a);
}
