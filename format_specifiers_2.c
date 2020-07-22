#include "holberton.h"

/**
 * print_string - prints a str
 * @s: String from va_arg
 * Return: Length of the string
 **/
int print_string(va_list s)
{
	char *string;
	int i;

	string = va_arg(s, char *);
	if (string == NULL)
		string = "(null)";
	for (i = 0; string[i]; i++)
	{
		_putchar(string[i]);
	}
	va_end(s);
	return (i);
}
/**
 * print_unsigned - prints an unsigned int in stdout
 * @u: unsinged int number to print
 * Return: Amount of bytes printed
 **/
int print_unsigned(va_list u)
{
	unsigned int i, num, temp, expo, count;
	char *string;

	num = va_arg(u, unsigned int);
	count = i = 0;
	expo = 1;
	temp = num;
	while (temp >= 10)
	{
		expo *= 10;
		temp /= 10;
		count++;
	}
	count++;
	string = malloc(count * sizeof(char));
	while (expo >= 1)
	{
		string[i] = (((num / expo) % 10) + '0');
		_putchar(string[i]);
		expo /= 10;
		i++;
	}
	free(string);
	va_end(u);
	return (count);
}
/**
 * print_octal - prints a integer in octal base
 * @oct: number to convert
 * Return: Amount of bytes printed
 **/
int print_octal(va_list oct)
{
	int count = 0, i;
	int *arr;
	unsigned int n = va_arg(oct, unsigned int);
	unsigned int tmp = n;

	while (n / 8 != 0)
	{
		n /= 8;
		count++;
	}
	count++;
	arr = malloc(count * sizeof(int));
	for (i = 0; i < count; i++)
	{
		arr[i] = tmp % 8;
		tmp /= 8;
	}
	for (i = count - 1; i >= 0; i--)
	{
		_putchar(arr[i] + '0');
	}
	free(arr);
	va_end(oct);
	return (count);
}
