#include "holberton.h"

/**
 * print_adress - prints an adress in memory.
 * @hexa: passed list.
 * Return: number of bytes printed
 **/

int print_adress(va_list hexa)
{
	int i, printed;
	unsigned long int adress = va_arg(hexa, unsigned long int);
	char *string = "(nil)";

	if (adress == 0)
	{
		for (i = 0, printed = 0; string[i]; i++)
			_putchar(string[i]), ++printed;
		return (printed);
	}
	_putchar('0');
	_putchar('x');
	return (_hex_str(adress, 16, 'a'));
}

/**
 * print_cust_string - prints non printable characters this way:
 * \x, followed by the ASCII code value in hexadecimal
 * (upper case - always 2 characters)
 * @s: passed list.
 * Return: number of bytes printed
 **/

int print_cust_string(va_list s)
{
	char *string;
	int i, printed = 0;

	string = va_arg(s, char *);
	if (string == NULL)
		string = "(nil)";
	for (i = 0; string[i]; i++)
	{
		if ((string[i] > 0 && string[i] < 32) || string[i] >= 127)
		{
			if (string[i] < 16)
			{
				_putchar('\\'), _putchar('x');
				_putchar('0'), printed += 3;
				printed += _hex_str(string[i], 16, 'A');
			}
			else
			{
				_putchar('\\'), _putchar('x'), printed += 2;
				printed += _hex_str(string[i], 16, 'A');
			}
		}
		else
			_putchar(string[i]), ++printed;
	}
	return (printed);
}

/**
 * print_rev_string - prints a string in reverse.
 * @r: passed list.
 * Return: number of bytes printed
 **/

int print_rev_string(va_list r)
{
	char *string;
	int i, printed = 0;

	string = va_arg(r, char *);
	for (i = 0; string[i] != '\0'; i++)
		;
	i--;
	while (i >= 0)
	{
		_putchar(string[i]);
		printed++;
		i--;
	}
	return (printed);
}

/**
 * print_rot13 - prints a string in rot 13.
 * @rot: passed list.
 * Return: number of bytes printed
 **/

int print_rot13(va_list rot)
{
	char *string;
	char *alpha = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char *rot13 = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int i, j, printed = 0;

	string = va_arg(rot, char *);

	for (i = 0; string[i]; i++)
	{
		for (j = 0; alpha[j]; j++)
		{
			if (string[i] == alpha[j])
			{
				_putchar(rot13[j]), ++printed;
				break;
			}
			if (alpha[j + 1] == '\0')
				_putchar(string[i]), ++printed;
		}
	}
	return (printed);
}
