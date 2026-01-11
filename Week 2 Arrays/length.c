#include <cs50.h>
#include <stdio.h>

int main(void) // int main(void) is the main function where the program starts executing
{
    string name = get_string("Name: "); // this creates a string variable called "name", it then prompt the user to input their name by using "get_string"

    int n = 0; // this creates an integer variable called "n" and sets the value to 0
    while (name[n] != '\0') // This loop checks how many charecters are in the string "name" by checking each character until it reaches the null terminator '\0'
{
    n++; // as the string is checked, 0 is the first charecter counted, so n is increased by 1 to make sure that a 4 letter name is counted as 4 and not 3
}
    printf("%i\n", n); // this prints the total number of charecters in the string "name" +1 for the counting of 0
}

