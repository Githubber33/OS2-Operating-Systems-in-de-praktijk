#include <stdio.h>

void print_function( char letter );
int ctr;
int ctr1;
int main( void )
{
    char star = '*';
    char dash = '-';
    for ( ctr1 = 0 ; ctr1 < 10; ctr1++ )
    {
        print_function( star );
        print_function( dash );
        printf("\n");
    }
    return 0;
}

void print_function ( char letter )
{
    for ( ctr = 0; ctr < 9; ctr++) 
    {
        printf("%c", letter);
    }
}

