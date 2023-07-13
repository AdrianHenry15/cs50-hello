#include <stdio.h>
#include <string.h>

// main part of function
int main(void)
{
    char name;
    // prints "What is Your Name" to the console for the user to respond to"
    printf("What Is Your Name?\n");
    // get the input from tphe user
    scanf("%s", &name);
    // print the user's name
    printf("Hello, %s\n", &name);
    
}