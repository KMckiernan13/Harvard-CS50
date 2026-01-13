#include <cs50.h>
#include <stdio.h>

void draw(int n);

int main(void)
{
    int height = get_int("Height: ");

    draw(height);
}

void draw(int n)
{
    if (n <= 0)                    //base case to stop infinite loop
        return;
    draw(n - 1);                   //print a pyrimad of n - 1
    for (int i = 0; i < n; i++)    //print one more row
        printf("#");               //print bricks (#)
    printf("\n");
}
