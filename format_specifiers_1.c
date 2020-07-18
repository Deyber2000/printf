#include "holberton.h"

/**
 * print_char - prints a character.
 * @c: passed list.
 * Return: 1.
 */

int print_char(va_list c)
{
	_putchar((char)va_arg(c, int));
	return (1);
}

/**
 * print_decimal - prints a decimal number.
 * @d: passed list.
 * Return: number of character printed.
 */

int print_decimal(va_list d)
{
	int n = va_arg(d, int);
	int printed = 0;

	if (n < 0)
		_putchar('-'), ++printed, n = -n;
	if (n / 10)
		print_decimal(n / 10);
	_putchar(n % 10 + '0');
	++printed;

	return (printed);
}

/**
 * print_integer - prints integers.
 * @d: passed list.
 * Return: number of character printed.
 */

int print_integer(va_list d)
{
	int n = va_arg(d, int);
	int printed = 0;

	if (n < 0)
		_putchar('-'), ++printed, n = -n;
	if (n / 10)
		print_integer(n / 10);
	_putchar(n % 10 + '0');
	++printed;

	return (printed);
}
