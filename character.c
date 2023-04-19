#include "character.h"
#include <unistd.h>

void print_character(char c)
{
    write(STDOUT_FILENO, &c, 1);
}
