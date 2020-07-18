#include "holberton.h"

/**
 * print_string - prints a string
 * @s: String from va_arg
 * Return: Length of the string
 **/
int print_string(va_list s)
{
	char *string;
	int i;

	string = va_arg(s, char *);
	if (string == NULL)
		string = "(nil)";
	for (i = 0; string[i]; i++)
	{
		_putchar(string[i]);
	}
	return (i);
}
