#include <cs50.h>
#include <stdio.h>

int main(int argc, string argv[])
{
    if (argc == 2) // argc only counts how many values it is = to, so this only has 2 values, the program name and the one word input, is you were to put a first name and a second name it would revert to "hello world"
    {
        printf("hello, %s\n", argv[0]);
    }
    else
    {
        printf("Hello, world\n");
    }
}
