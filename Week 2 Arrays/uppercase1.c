#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void) // this means the program doesnt take command line arguments
{
    string s = get_string("Before: ");
        printf("After:  ");
        for (int i = 0, n = strlen(s); i < n; i++)
        {
        printf("%c", toupper(s[i])); //The "toupper" function is a function that converts a lowercase character to uppercase
        }
    printf("\n");
    }


    //other notes
    //1. instead of int main(void) you can also use int main(int argc, string argv[]) if you want to take command line arguments
// 2. int argc means argument count. argv is a argument vector (array) that contains the actual arguments as strings
