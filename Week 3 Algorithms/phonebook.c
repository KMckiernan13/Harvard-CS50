#include <cs50.h>
#include <stdio.h>
#include <string.h>

typedef struct        //
{
    string name;      // This sectiom uses "typedef to create a custom data structure to store the name & phone number of each person entered
    string number;
} person;             // This is the nickname that will be called upon firther in the code

int main(void)
{
    person people[3]; //This creates an array which stores the names and numbers of the people entered below

    people[0].name = "Kelly";
    people[0].number = "+1-617-495-1000";

    people[1].name = "David";
    people[1].number = "+1-617-495-1000";

    people[2].name = "John";
    people[2].number = "+1-949-468-2750";


    string name = get_string("Name: "); // this prompts the user to enter a "Name" so that the name can be matched up with the persons number
    for (int i = 0; i < 3; i++) // This creates a counter variable "i" that represents the current index of the array, it acts as a pointer telling the computer which person to point at within the array
    {
    if (strcmp(people[i].name, name) == 0) // "people[i].name" looks at the array(people) and finds the name associated with that search ie if i was looking for "Kelly" it would look ar i = 0. The user input controls the search and it must match one of the names in the array
    {
    printf("Found %s\n", people[i].number); // This prints the number on the users inputed name
    return 0;
    }
    }
        printf ("Not Found\n"); // this prints not found if the user enters a value (name) that is not actually in the array 
        return 1;
}
