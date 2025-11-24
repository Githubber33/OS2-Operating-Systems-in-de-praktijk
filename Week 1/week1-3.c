#include <stdio.h>
#include "week1-2.h"
int main() {
    int num = 0;

    printf("Enter a number:\n");
    scanf("%d", &num);
    if (num < 0)
    {
        printf("Negative number entered. Exiting.\n");
        return 1;
    }
    
    if (num == 1)
    {
        printf("Je koos getal 1: dit doet niks\n");
    }
    else if (num == 2)
    {
        printf("De print functie word uitgevoerd, het volgende character wordt geprint: *\n");
        print_function('*');
        printf("\n");
    }
    else if (num == 3)
    {
        printf("Je koos getal 3: dit getal wordt verdubbeld\n");
        num = num * 2;
        printf("Het verdubbelde getal is: %d\n", num);
    }
    
    

    
    

    return 0;
}