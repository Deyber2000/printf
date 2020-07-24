# _printf project

printf is one of the main C output function, and stands for "print formatted".
It is available in the the C library, and it is defined in the stdio.h header file.
printf id used to do formated printing in standar output.
The printf function receives a pointer to a string of characters to be printed in stdout, which can also contain format specifiers that are replaced by the values specified in subsequent aditional areguments passed to the function.

### prototype
### int printf(const char *format, ...);

## _printf ##


_printf function is based on the original printf function from the C library.

### header files needed

#### <stdio.h> 
#### <stdarg.h> 
#### "holberton.h"

### function prototype
#### int _printf(const char *format, ...);

### _printf currently supports the following format specifiers

| Format specifier | Output | Example |
| ---------------- | ------ | ------- |
| %c | character | d |
| %s | string of characters | c is funn |
| %d | decimal | 345 |
| %i | integer | 89845 |
| %b | decimal to binary | 100101 |
| %u | unsigned integer | 4523 |
| %o | decimal to octal | 510 |
| %x | decimal to hexadecimal | 0x7c5 |
| %X | decimal to capital hexadecimal | 0X7C5 |
| %p | Address | 0x7ffe637541f0 |
| %S | Custom string. Non printable characters are printed  this way: \x, followed by the ASCII code value in hexadecimal |
| %r | Reversed string | ! gnirts |
| %R | ROT13'd string | Nyjnlf or yrneavat |

Use case:


>_printf("Coding %R\n", "vf n tlz sbe gur oenva");


Output

> Coding is a gym for the brain.


## Authors ##
* Deyber Castañeda Garzon.
* Tomas Gomez Velez.
