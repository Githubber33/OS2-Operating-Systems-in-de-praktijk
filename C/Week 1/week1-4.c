#include <stdio.h>


void calculate(float diameter, float* ptr); // functie zodat main weet dat deze bestaat
int main() { //main functie
    float diameter = 0.0; // variabele voor diameter
    float omtrek = 0.0; // variabele voor omtrek
    float* ptr = &omtrek; // pointer die naar omtrek wijst
    printf("Voer de diameter in van de cirkel:\n"); // vraag om diameter
    scanf("%f", &diameter); // lees de diameter in en zet deze in de variabele diameter
    calculate(diameter, ptr); // roep de functie calculate aan met diameter en de pointer naar omtrek
    printf("De omtrek van de cirkel is: %.2f\n", omtrek); // print de omtrek met 2 decimalen
    return 0; // geef aan dat het programma succesvol is beëindigd

}



void calculate(float diameter, float* ptr) { // functie die de omtrek berekent, accepteert diameter en een pointer naar omtrek
    *ptr = 3.14 * diameter; // bereken de omtrek en sla deze op op de geheugenlocatie waar de pointer naar wijst
}