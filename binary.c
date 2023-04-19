#include "binary.h"
#include "integer.h"

void print_binary(unsigned int n)
{
    unsigned int mask = 1 << 31;
    int printed = 0;
    while (mask != 0) {
        if ((n & mask) != 0) {
            print_character('1');
            printed = 1;
        } else if (printed == 1) {
            print_character('0');
        }
        mask >>= 1;
    }
    if (printed == 0) {
        print_character('0');
    }
}
