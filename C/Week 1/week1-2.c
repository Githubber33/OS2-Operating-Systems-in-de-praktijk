#include <stdio.h>

void print_function( char letter ); //function prototype
int ctr; //global counter variable
int ctr1; //added another counter variable to avoid conflict
int main( void ) // main function
{
    char star = '*'; // variable to hold star character
    char dash = '-'; // variable to hold dash character
    for ( ctr1 = 0 ; ctr1 < 10; ctr1++ ) // Changed to ctr1 to avoid conflict with ctr in print_function
    {
        print_function( star ); // call function to print stars
        print_function( dash ); //  call function to print dashes
        printf("\n"); // print new line after each line
    }
    return 0; // indicate that the program ended successfully
}

void print_function ( char letter ) // function definition
{
    for ( ctr = 0; ctr < 9; ctr++) // loop to print 9 characters
    {
        printf("%c", letter); // print the character passed to the function
    }
}

