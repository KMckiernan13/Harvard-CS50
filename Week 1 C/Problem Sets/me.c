#include <cs50.h>
#include <stdio.h>

int main(void)
{
    string name = get_string("What is your name? "); // uses a string data tyoe to store the users input (name)

        printf("Hello, %s\n", name); // prints "Hello, (input)" "%s" is used to format the string input
}

