#ifndef HOLB_H
#define HOLB_H
#include <stdarg.h>
#include <stdlib.h>

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


int _printf(const char *format, ...);
int print_string(va_list);
int print_char(va_list);
int print_decimal(va_list);
int print_integer(va_list);
/**
int print_adress(va_list);
int print_binary(va_list);
int print_octal(va_list);
int print_hexa(va_list);
int print_up_hexa(va_list);
int print_cust_string(va_list);
int print_rev_string(va_list);
int print_rot13(va_list);
int print_percent(va_list); **/
int _putchar(char);
#endif
