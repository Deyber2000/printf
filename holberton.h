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






#endif
