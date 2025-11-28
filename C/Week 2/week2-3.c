#include <stdio.h>


struct student
    {
        char naam[50];
        int leeftijd;
        struct opleding
        {
            char naamOpleiding[50];
            int instroomjaar;
        } opleiding
        
    };
    
