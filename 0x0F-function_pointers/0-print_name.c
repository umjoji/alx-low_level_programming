#include "function.h"

/**
 * print_name - prints a name
 * @name: name
 * @f: format of the name
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	(*f)(name);
}

