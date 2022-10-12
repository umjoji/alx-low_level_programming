#include "function_pointers.h"

/**
 * print_name - prints a name
 * @name: name
 * @f: format of the name
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		(*f)(name);
}

