#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    string s = get_string("Before: ");
        printf("After:  ");
        for (int i = 0, n = strlen(s); i < n; i++)
        {
        if (s[i] >= 'a' && s[i] <= 'z') //if s[i] is lowercase we want to covert to uppercase
         {
        printf("%c", s[i] - 32);
    }
        else // if not lowercase
        {
        printf("%c", s[i]);
    }
}
    printf("\n");
    }
