#include "double.h"
#include "integer.h"
#include <math.h>

int print_decimal_places(double num) {
    int decimal_places = 0;
    int integer_part = (int)num;
    double fractional_part = num - integer_part;

    while (fractional_part != (int)fractional_part) {
        decimal_places++;
        fractional_part *= 10;
    }

   return (decimal_places);
}

void print_double(double d, int precision) {

    int end = print_decimal_places(d);
    if (precision  == 15) {
        precision = end;
    } else {
        end = precision;
    }
    if (d < 0) {
        print_character('-');
        d = -d;
    }

    long long int_part = (long long) d;
    print_integer(int_part);

    if (precision > 0) {
        print_character('.');
    }

    double fractional_part = d - int_part;
    for (int i = 0; i < precision && end > 0; i++) {
        fractional_part *= 10;
        int digit = (int) fractional_part;
        print_character(digit + '0');
        fractional_part -= digit;
        end--;
    }
}
