#include <stdio.h>


int main() {
    int num = 0;

    printf("Enter a number:\n");
    scanf("%d", &num);
    if (num < 0)
    {
        printf("Negative number entered. Exiting.\n");
        return 1;
    }
    
    printf("Your number is: %d\n", num);

    return 0;
}