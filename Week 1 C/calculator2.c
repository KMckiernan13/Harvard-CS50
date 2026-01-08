#include <cs50.h>
#include <stdio.h>

int main(void) // this is the main function where the program start. (void) means it takes no arguments
{
    long dollars = 1; // a "long" is a type of integer that can hold larger values i.e. +2,000,000,000
    while (true)
    {
        char c = get_char("Here is $%li. Double it and give it to the next person? ", dollars); // this uses "%li" which is the long integer "long" shorthand
        if (c == 'y') // if the charecter "c" whcih is the users input, is equal to 'y' (yes) then do the following
        {
            dollars *= 2; // *= is the shorthand for times equals in C
        }
        else // "else" means if the condition (c == 'y') is not met, do the following, in this program the following is "break"
    {
        break; // "break" means it breaks the loop i.e stops the loop
    }
    }
}

// other notes
// Integer overflow is when a calculation prodcues a number larger than the integer max value
//
