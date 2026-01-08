#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int x = get_int("What is x? "); //this prompts the user for "x"
    int y = get_int("What is y? "); // this prompts the user for "y"

    int sum = x + y; // the variable "sum" is going to store the value of "x" + "y". ex 5+4 =9

    printf("%i\n", sum);
}

// other notes
// 1. use up arrows and down arrows to navigate through previous terminal promtps  
