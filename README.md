# _printf

_printf is a custom implementation of the printf function in C that allows for printing formatted output to the console without using the stdio.h library.

## Supported Format Specifiers

_printf supports the following format specifiers for various data types:

- %s - for strings
- %c - for characters
- %d - for integers
- %i - for integers
- %f - for floats
- %lf - for doubles
- %p - for pointers
- %b - for binary numbers
- %o - for octal numbers
- %x - for hexadecimal numbers

## Exemple

```
/* Example 1: Printing a string */
char *str = "Hello, world!";
_printf("%s\n", str);
// Output: Hello, world!

/* Example 2: Printing an integer */
int num = 42;
_printf("%d\n", num);
// Output: 42

/* Example 3: Printing a float */
float f = 3.14;
_printf("%f\n", f);
// Output: 3.140000

/* Example 4: Printing a pointer */
void *ptr = NULL;
_printf("%p\n", ptr);
// Output: 0x0

/* Example 5: Using multiple format specifiers and arguments */
char c = 'A';
int x = 42;
char *str = "Hello, world!";
_printf("The character is: %c, the integer is: %d, and the string is: %s\n", c, x, str);
// Output: The character is: A, the integer is: 42, and the string is: Hello, world!
```


## Limitations
_printf  is not complete! It's just to remember how to code in C.

## Author
This _printf function was created by AF (justNoOneHere).



