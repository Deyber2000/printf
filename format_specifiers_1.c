#include "holberton.h"

/**
 * print_char - prints a character.
 * @c: passed list.
 * Return: 1.
 */

int print_char(va_list c)
{
	_putchar(va_arg(c, int));
	return (1);
}

/**
 * print_integer - prints integers.
 * @integer: passed list.
 * Return: number of character printed.
 */

int print_integer(va_list integer)
{
	int count = 0, i;
	int *arr;
	int n = va_arg(integer, int);
	int tmp = n;

	while (n / 10 != 0)
	{
		n /= 10;
		count++;
	}
	if (tmp < 0)
		_putchar('-');
	count++;
	arr = malloc(count * sizeof(int));
	for (i = 0; i < count; i++)
	{
		arr[i] = tmp % 10;
		tmp /= 10;
	}
	for (i = count - 1; i >= 0; i--)
	{
		_putchar(arr[i] + '0');
	}
	free(arr);
	va_end(integer);
	if (tmp < 0)
		count++;
	return (count);
}
