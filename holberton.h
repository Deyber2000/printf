#ifndef HOLB_H
#define HOLB_H

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
int print_string();
int print_decimal();
int print_integer();
int print_adress();
int print_binary();
int print_octal();
int print_hexa();
int print_up_hexa();
int print_cust_string();
int print_rev_string();
int print_rot13();
int print_percent();

#endif
