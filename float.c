#include "float.h"
#include "integer.h"


int print_decimal_places_f(float num) {
    int decimal_places = 0;

      while ((int) num != num) {
        num *= 10;
        decimal_places++;
      }

    return (decimal_places);
}


void print_float(float f, int precision)
{
    int end = print_decimal_places_f(f);
    if (precision  == 6) {
        precision = end;
    } else {
        end = precision;
    }
    if (f < 0) {
        print_character('-');
        f = -f;
    }
    print_integer((int)f);
    print_character('.');
    f -= (int)f;
    for (int i = 0; i < precision && end > 0; i++) {
        f *= 10;
        print_integer((int)f);
        f -= (int)f;
        end--;
    }
}

