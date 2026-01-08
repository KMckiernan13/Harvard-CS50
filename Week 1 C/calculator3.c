#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int x = get_int("what is x? ");
    int y = get_int("What is y? ");

    printf("%0.001f\n", x / y);
}


// other notes
// 1. If use a integer you throw away any numbers after the decimal place, so we change "%i" to "%f" which changes the data type to a float (allows decimals)
// 2. you can also change the amount of deceimals shows by doing "%0.00f" which would show only 2 decimal places, the number of numbers after the . decides how many decimal numbers shown

