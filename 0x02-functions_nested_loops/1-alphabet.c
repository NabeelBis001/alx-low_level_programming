#include "main.h"

/**
 * print_alphabet - Prints the alphabet in lowercase followed by a new line.
 */
void print_alphabet(void)
{
    int i;
    char letter;

    for (i = 0, letter = 'a'; i < 26; i++, letter++)
    {
        _putchar(letter);
    }
    _putchar('\n');
}
