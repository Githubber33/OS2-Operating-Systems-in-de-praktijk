#include <stdio.h>
#include "week1-2.h"
int ctr; //global counter variable
void print_function ( char letter ) // function definition
{
    for ( ctr = 0; ctr < 9; ctr++) // loop to print 9 characters
    {
        printf("%c", letter); // print the character passed to the function
    }
}