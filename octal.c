#include "octal.h"
#include "integer.h"

void print_octal(unsigned int n)
{
    char buffer[12];
    char* ptr = buffer;
    if (n == 0) {
        print_character('0');
        return;
    }
    while (n != 0) {
        *ptr = n % 8 + '0';
        n /= 8;
        ptr++;
    }
    while (ptr != buffer) {
        ptr--;
        print_character(*ptr);
    }
}
