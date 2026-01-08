#include <stdio.h>

int main(void)
{
    const int n = 3;
    // for each row
    for (int row = 0; row < 3; row++)
    {
        //for each collum
       for(int col = 0; col < 3; col++)
       {
        // print one block
           printf("#");
       }
       printf("\n");
    }
}

// Constants (const) are values that cannot be changed during program execution.
// "+" means addition in C
// "-" means subtraction in C
// "*" means multiplication in C
// "/" means division in C
// "%" means modulus (remainder) in C
// "++" means increment by 1 in C
// "--" means decrement by 1 in C
