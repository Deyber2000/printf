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

	va_start(list, format);
	v_types valid_types[] = {
		{"c", print_char},
		        {"s", print_string},
			{"d", print_decimal},
			{"i", print_integer},
			/**{"p", print_adress},
			{"b", print_binary},
			{"o", print_octal},
			{"x", print_hexa},
			{"X", print_up_hexa},
			{"S", print_cust_string},
			{"r", print_rev_string},
			{"R", print_rot13},
			{"%", print_percent}};**/};

	for (i = 0; format[i] && format; i++)
	{
		if (format[i] == '%')
		{
			for (j = 0; j < 4; j++)
			{
				if (format[i + 1] == *valid_types[j].valid)
				{
					printed += valid_types[j].f(list);
					i++;
				}
			}
		}
		else
			_putchar(format[i]), ++printed;
	}
	va_end(list);
	return (printed);
}
