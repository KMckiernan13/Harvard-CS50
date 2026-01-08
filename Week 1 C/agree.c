#include <stdio.h>
#include <cs50.h>

int main(void)
{
    char c = get_char("Do you agree? ");      # A variable "c" is created, which the answer to "c" lies in the prompt to the user "Do you agree? "

    if(c == 'y' || c == 'Y')                  # if the answer to "c" (The variable created above) is equal to 'y' || (Or) 'Y' (Did the user say yes ('y' or 'Y')to thhe prompt)
    {
        printf("Agreed.\n");                  # If the user answered yes (y), it then answers "Agreed."
    }
    else                                      # else (If they didnt) the answer to "c" is 'n' (No)
    {
        printf("Not agreed.\n");              # Then printf (Print the text) "Not agreed." because the user said 'n' (No)
    }
}
