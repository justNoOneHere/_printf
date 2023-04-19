#include "integer.h"

void print_integer(int n)
{
    char buffer[11];
    char* ptr = buffer;
    if (n < 0) {
        print_character('-');
        n = -n;
    }
    if (n == 0) {
        print_character('0');
        return;
    }
    while (n != 0) {
        *ptr = n % 10 + '0';
        n /= 10;
        ptr++;
    }
    while (ptr != buffer) {
        ptr--;
        print_character(*ptr);
    }
}
