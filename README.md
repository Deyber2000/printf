# _printf project

## _printf ##


_prinf is a function used to do formated printing in standar output.

This project is based on version 3 of the GNU printf.

### #include <stdio.h> ###
### #include <stdarg.h> ###
### #include "holberton.h" ###
### int _printf(const char *format, ...); ###


## Format specifiers ##

%c -> character.

%s -> string.

%d -> decimal.

%i -> integer.

%b -> decimal to binary.

%u -> unsigned integer.

%o -> decimal to octal.

%x -> decimal to hexadecimal.

%X -> decimal to capital hexadecimal.

%p -> Address.

%S -> Custom string. Non printable characters are printed  this way: \x, followed by the ASCII code value in hexadecimal.

%r -> Reversed string.

%R -> ROT13'd string.

Use case:


>_printf("Coding %R\n", "vf n tlz sbe gur oenva");


Output

> Coding is a gym for the brain.


## Authors ##
* Deyber Castañeda Garzon.
* Tomas Gomez Velez.
