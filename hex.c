#include "hex.h"
#include "integer.h"

void print_hex(unsigned int n)
{
    char buffer[9];
    char* ptr = buffer;
    if (n == 0) {
        print_character('0');
        return;
    }
    while (n != 0) {
        int digit = n % 16;
        if (digit < 10) {
            *ptr = digit + '0';
        } else {
            *ptr = digit - 10 + 'a';
        }
        n /= 16;
        ptr++;
    }
    while (ptr != buffer) {
        ptr--;
        print_character(*ptr);
    }
}

