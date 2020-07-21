#ifndef HOLB_H
#define HOLB_H
#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * struct validTypes - structure to lookup functions for valid types
 * @valid: flags are preceded by a '%' character.
 * @f: pointer to function
 */
typedef struct validTypes
{
	char *valid;
	int (*f)();
} v_types;

/** _printf.c **/
int _printf(const char *format, ...);

/** format_specifiers_1.c **/
int print_char(va_list);
int print_integer(va_list);
int print_integer_helper(int n, int printed);

/** format_specifiers_2.c **/
int print_string(va_list);
int print_unsigned(va_list);
int print_octal(va_list);
int print_binary(va_list);

/** format_specifiers_3.c **/
int print_adress(va_list);
int print_cust_string(va_list);

/** format_specifiers_4.c **/
int print_hexa(va_list);
int print_up_hexa(va_list);
int _hex_str(unsigned long int, unsigned int, char);
int print_rev_string(va_list);
int print_rot13(va_list);

/** tools.c **/
int _putchar(char);

#endif
