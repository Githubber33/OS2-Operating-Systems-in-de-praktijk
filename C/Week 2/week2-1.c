#include <stdio.h>


void maxArrays(float array1[], float array2[], float array3[], int lengte); // functie zodat main weet dat deze bestaat
int main(void) // main functie
{
    float array1[] = {0.7, 3.3, 0.5, 10.3}; // eerste array met waarden
    float array2[] = {4.1, 1.5, 0.5, 2.3}; // tweede array met waarden
    float array3[4]; // derde array om de maximale waarden op te slaan
    int lenArray1 = sizeof(array1) / sizeof(array1[0]); // lengte van de eerste array als interger
    int lenArray2 = sizeof(array2) / sizeof(array2[0]); // lengte van de tweede array als integer
    int lenArray3 = sizeof(array3) / sizeof(array3[0]); // lengte van de derde array als integer
    printf("Array 1: "); // print eerste array
    for (int i = 0; i < lenArray1; i++) { // loop door de eerste array
        printf("%.2f ", array1[i]); // print elk element met 2 decimalen
    }
    printf("\nArray 2: "); // print tweede array
    for (int i = 0; i < lenArray2; i++) { // loop door de tweede array
        printf("%.2f ", array2[i]); // print elk element met 2 decimalen
    } 
    printf("\n");
    maxArrays(array1, array2, array3, lenArray3); // roep de functie maxArrays aan om de maximale waarden te berekenen
    printf("Array 3 (max values): "); // print de derde array met maximale waarden
    for (int i = 0; i < lenArray3; i++) { // loop door de derde array met de meegegeven lengte
        printf("%.2f ", array3[i]); // print elk element met 2 decimalen
    }
    printf("\n");
    
    return 0;

}



void maxArrays(float array1[], float array2[], float array3[], int lengte) { // functie die de maximale waarden van twee arrays berekent
    for (int i = 0; i < lengte; i++) { // loop voor de index voor de arrays
        if (array1[i] > array2[i]) { // als het element in array1 groter is dan dat in array2
            array3[i] = array1[i]; // sla het element van array1 op in array3
        } else {
            array3[i] = array2[i]; // anders sla het element van array2 op in array3
        }
    }
    
}