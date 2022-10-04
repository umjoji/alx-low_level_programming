#include "main.h"
#include "2-strlen_recursion.c"

/**
 * comparer - compares each character of the string
 * @s: string
 * @n1: smallest iterator
 * @n2: biggest iterator
 * Return: integer
 */

int comparer(char *s, int n1, int n2)
{
	if (*(s + n1) == *(s + n2))
	{
		if (n1 == n2 || n1 == n2 + 1)
			return (1);
		return (0 + comparer(s, n1 + 1, n2 - 1));
	}
	return (0);
}

/**
 * is_palindrome - checks for a palindrome
 * @s: string
 * Return: 1 if s is a palindrome else 0
 */

int is_palindrome(char *s)
{
	if (*s == '\0')
	{
		return (1);
	}
	return (comparer(s, 0, _strlen_recursion(s) - 1));
}
