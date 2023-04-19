#include <stdarg.h>
#include "printf.h"
#include "string.h"
#include "integer.h"
#include "character.h"
#include "float.h"
#include "double.h"
#include "pointer.h"
#include "binary.h"
#include "octal.h"
#include "hex.h"

void _printf(const char* format, ...)
{
    va_list args;
    va_start(args, format);

    while (*format != '\0') {
        if (*format == '%') {
            format++;
            int precision = -1;
            if (*format == '.') {
                format++;
                precision = 0;
                while (*format >= '0' && *format <= '9') {
                    precision = precision * 10 + (*format - '0');
                    format++;
                }
            }
            if (*format == 'd' || *format == 'i') {
                print_integer(va_arg(args, int));
            } else if (*format == 'c') {
                print_character(va_arg(args, int));
            } else if (*format == 's') {
                print_string(va_arg(args, char*));
            } else if (*format == 'f') {
                if (precision < 0) {
                    print_float(va_arg(args, double), 6);
                } else {
                    print_float(va_arg(args, double), precision);
                }
            } else if (*format == 'L' || (*format == 'l' && *(format+1) == 'f')) {
                if (*format == 'l') {
                    format++;
                }
                if (precision < 0) {
                    print_double(va_arg(args, double), 15);
                } else {
                    print_double(va_arg(args, double), precision);
                }


            } else if (*format == 'p') {
                print_pointer(va_arg(args, void*));
            } else if (*format == 'b') {
                print_binary(va_arg(args, unsigned int));
            } else if (*format == 'o') {
                print_octal(va_arg(args, unsigned int));
            } else if (*format == 'x') {
                print_hex(va_arg(args, unsigned int));
            } else {
                print_character(*format);
            }
        } else {
            print_character(*format);
        }
        format++;
    }

    va_end(args);
}
