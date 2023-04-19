#include "pointer.h"
#include "integer.h"

void print_pointer(void* ptr)
{
    print_character('0');
    print_character('x');
    print_integer((unsigned long long)ptr);
}

