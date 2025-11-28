#include <stdio.h>

int main() {
    printf("Voer een zin in:\n"); // vraag om een zin
    char zin[100]; // array om de zin op te slaan
    int count = 0;
    fgets(zin, sizeof(zin), stdin); // lees de zin in
    for (int i = 0; zin[i] != '\0'; i++) { // loop door elk karakter in de zin
        count = count+1; // verhoog de teller voor elk karakter
    }
    printf("Het aantal karakters in de zin is: %d\n", count - 1); // print het aantal karakters zonder de null-terminator
    return 0; // geef aan dat het programma succesvol is beëindigd
}