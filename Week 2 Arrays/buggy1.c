#include <stdio.h>
#include <cs50.h>
int main(void)
{
    string name = get_string("Whats your name");
    printf("hello, %s\n,name");
}

//Other notes
// 1. Actually read the error messgaes, the error messages tell you near enough exactly what is wrong
// 2. a syntax error is a error that is in the code
// 3. a Logical error is a error that is just not intelectually correct such as asking the user there name but stil printf("hello, world") not technically an error but just doesnt look good
