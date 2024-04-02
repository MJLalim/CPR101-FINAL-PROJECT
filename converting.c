// CONVERTING MODULE SOURCE

#define CRT_SECURE_NO_WARNINGS
#define BUFFER_SIZE 80
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "converting.h"

// V1
void converting(void) {
    printf("*** Start of Converting Strings to double Demo ***\n");
    char doubleString[BUFFER_SIZE]; 
    double doubleNumber;
    do {
        printf("Type the double numeric string (q - to quit):\n");
        fgets(doubleString, BUFFER_SIZE, stdin);
        doubleString[strlen(doubleString) - 1] = '\0'; 

        if (strcmp(doubleString, "q") != 0) {
            doubleNumber = atof(doubleString);
            printf("Converted number is %.2f\n", doubleNumber); 
        }
    } while (strcmp(doubleString, "q") != 0);

    printf("*** End of Converting Strings to double Demo ***\n\n");

    return 0;
}
