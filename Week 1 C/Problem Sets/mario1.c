#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // get a valid height from user
    int n; // lists the variable n (height)

    do
    {
        n = get_int("Height: "); // prompts the user for height
    }
    while (n < 1 || n >8);  // while n (height) is less than 1 or (||) greater than 8, keep prompting

    for (int i = 0; i < n; i++) // "int i" creates a counter starting at 0. // if "i" is less than n (user inputed height) then increase "i" by 1, this matters in the next line
{
    for (int j = 0; j <= i; j++) // this basically means that j and i are directly correlated, so if i is 0, j is 0, if i is 1, j is 1, etc.    
    {
        printf("#"); // This prints the blocks
    }
    printf("\n");
}
}
