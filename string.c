#include "string.h"

void print_string(const char* str)
{
    while (*str != '\0') {
        print_character(*str);
        str++;
    }
}
