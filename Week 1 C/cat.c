#include <stdio.h>
#include <cs50.h>

int get_n(void);
void meow(int times);

in main (void)
{
    int n = get_n();

    meow(n);
}

int get_n(void)
{
    int n;
    do
    {
        n= get_int("Whats's n? ");
    }
    while (n < 0);
    return n;
}
// # Other notes
// 1. Control + C stops the program.
// 2. By doing "int n" this creates the variable (n) and assigns the data type (int).
// 3. The "while (true)" loop continues indefinitely until a break condition is met.
// 4. The "get_int" function prompts the user for an integer input.
// 5. The "if (n >= 0)" condition checks if the input is non-negative.
// 6. void means the function does not return any value.
// 7. if "n" is changed to "times" in the meow function, it will still work as intended since it's just a parameter name change.
// 8. "return n;" sends the value of n back to where the function was called.
// 9. The do while loop ensures that the prompt is shown at least once before checking the condition.
