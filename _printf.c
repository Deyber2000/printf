#include "holberton.h"

/**
 * _printf - function to do formatted printing.
 * man 3 printf.
 * @format: Character string to be printed.
 * Return: Number of bytes printed.
 */

int _printf(const char *format, ...)
{
	unsigned int printed = 0, i, j;
	va_list list;
	v_types valid_types[13];

	for (i = 0; i < 13; i++)
		valid_types[i] = definition(i);

	if (format == NULL)
		return (-1);
	va_start(list, format);
	for (i = 0; format[i]; i++)
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == '\0' || format[i + 1] == ' ')
				return (-1);
			if (format[i + 1] == '%')
				_putchar(format[i + 1]), ++printed;
			else
			{
				for (j = 0; j < 13; j++)
				{
					if (format[i + 1] == *valid_types[j].valid)
					{
						printed += valid_types[j].f(list), i++;
						break;
					}
				}
			}
		}
		else
			_putchar(format[i]), ++printed;
	}
	va_end(list);
	return (printed);
}

/**
 * definition - defines each element of the array
 * @i: .
 * Return: Eache element of the array of structures.
 */

v_types definition(int i)
{
	v_types valid_types[] = {
			{"c", print_char},
			{"s", print_string},
			{"d", print_integer},
			{"i", print_integer},
			{"u", print_unsigned},
			{"p", print_adress},
			{"b", print_binary},
			{"o", print_octal},
			{"x", print_hexa},
			{"X", print_up_hexa},
			{"S", print_cust_string},
			{"r", print_rev_string},
			{"R", print_rot13}};

	return (valid_types[i]);
}
