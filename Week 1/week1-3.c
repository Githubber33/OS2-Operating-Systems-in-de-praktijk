#include <stdio.h>
#include "week1-2.h"
int main() { // main functie
    int num = 0; // variabele voor het getal

    printf("Enter a number:\n"); // vraag om een getal
    scanf("%d", &num); // lees het getal in
    if (num < 0) // controleer of het getal negatief is
    {
        printf("Negative number entered. Exiting.\n"); // foutmelding voor negatief getal
        return 1; // beëindig het programma met een foutcode
    }
    
    if (num == 1) // controleer of het getal 1 is
    {
        printf("Je koos getal 1: dit doet niks\n"); // informeer de gebruiker dat er niks gebeurt
    }
    else if (num == 2) // controleer of het getal 2 is
    {
        printf("De print functie word uitgevoerd, het volgende character wordt geprint: *\n"); // de grebruiker wordt geïnformeerd dat de print functie wordt uitgevoerd en het volgende karakter geprint wordt: *
        print_function('*'); // roep de print_function aan met het character '*'
        printf("\n"); // print een nieuwe regel na het printen van de karakters
    }
    else if (num == 3) // controleer of het getal 3 is
    {
        printf("Je koos getal 3: dit getal wordt verdubbeld\n"); // informeer de gebruiker dat het getal verdubbeld wordt
        num = num * 2; // verdubbel het getal
        printf("Het verdubbelde getal is: %d\n", num); // print het verdubbelde getal
    }
    

    return 0; // geef aan dat het programma succesvol is beëindigd
}