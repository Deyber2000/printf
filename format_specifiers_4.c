#include "holberton.h"
/**
 * _hex_str - converts the number from base 10 to hex
 * @n: number to be converted
 * @hex: base of 16 being passed
 * @alpha: Char 'A' to 'F' or 'a' to 'f'
 * Return: number of chars printed
 */
int _hex_str(unsigned long int n, unsigned int hex, char alpha)
{
	unsigned long int a = n % hex;
	unsigned long int b = n / hex;
	char c;

	if (a > 9)
		c = (a - 10) + alpha;
	else
		c = a + '0';
	if (b == 0)
	{
		return (_putchar(c));
	}
	if (b < hex)
	{
		if (b > 10)
		{
			return (_putchar(b - 10 + alpha));
		}
		return (_putchar(b + '0') + _putchar(c));
	}
	return (_hex_str(b, hex, alpha) + _putchar(c));
}

/**
 * print_hexa - printing lower case hexa
 * @hexa: argument recieved
 * Return: no of char printed
 */
int print_hexa(va_list hexa)
{
	return (_hex_str(va_arg(hexa, unsigned int), 16, 'a'));
}
/**
 * print_up_hexa - printing upper case hexa
 * @hexa: argument recieved
 * Return: no. of char printed
 */
int print_up_hexa(va_list hexa)
{
	return (_hex_str(va_arg(hexa, unsigned int), 16, 'A'));
}

/**
 * print_binary - convert an integer to binary and print it
 * @bin: Number to convert
 * Return: The lenght of the string printed
 **/
int print_binary(va_list bin)
{
	int count = 0, i;
	int *arr;
	unsigned int n = va_arg(bin, unsigned int);
	unsigned int tmp = n;

	while (n / 2 != 0)
	{
		n /= 2;
		count++;
	}
	count++;
	arr = malloc(count * sizeof(int));
	if (arr == NULL)
	{
		free(arr);
		return (0);
	}
	for (i = 0; i < count; i++)
	{
		arr[i] = tmp % 2;
		tmp /= 2;
	}
	for (i = count - 1; i >= 0; i--)
	{
		_putchar(arr[i] + '0');
	}
	free(arr);
	return (count);
}
