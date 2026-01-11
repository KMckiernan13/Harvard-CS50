#include <cs50.h>
#include <stdio.h>

// Function prototypes
void print_column(int height);

int main(void)
{
    int h = get_int("Height: ");
    print_column(h);
}
void print_column(int height)
{
    for(int i = 0; i < height; i++)
    {
        printf("#\n");
    }
}
// other notes
// 1. 0 counts as a number, so if i had <= 3 it would print 4 #s
// 2. function prototypes are functions that need to be declared before they are used
// 3. use debug 50 to print each line of code as it is exucuted to help find bugs
// 4. a breakpoint is a marker that you can tell the bugger to pause execution
