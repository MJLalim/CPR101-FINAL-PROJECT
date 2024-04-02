// TOKENIZING MODULE SOURCE
#define _CRT_SECURE_NO_WARNINGS 
#define CRT_SECURE_NO_WARNINGS
#define BUFFER_SIZE 300

#include <stdio.h>
#include <string.h>
#include "tokenizing.h"

// V1
void tokenizing(void) {
    printf("*** Start of Tokenizing Words Demo ***\n");
    char words[BUFFER_SIZE];
    char* nextWord = NULL; 
    int WordsCounter;

    do {
 
        printf("Type a few words separated by space (q - to quit):\n");
        fgets(words, BUFFER_SIZE, stdin);
        words[strlen(words) - 1] = '\0';

        if (strcmp(words, "q") != 0) {
            nextWord = strtok(words, " "); 
            WordsCounter=1;
            while (nextWord!=NULL) {
                printf("Word #%d is \'%s\'\n", WordsCounter++, nextWord);
                nextWord = strtok(NULL, " "); 
            }
        }
    } while (strcmp(words, "q") != 0);

    printf("*** End of Tokenizing Words Demo ***\n\n");
}
