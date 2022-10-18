/** lab21-2.c
 * ===========================================================
 * Name: Benjamin Tat
 * Section: T6
 * Project: Lab 21
 * ===========================================================
 */
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE* inputFile = NULL; // File pointer,
    char fileName[100];

    char time[100];
    char title[100];
    char previousTitle[100] = "dog";
    char rating[100];
    int i = 0;

    scanf("%s", fileName);

    inputFile = fopen(fileName, "r");

    if (inputFile == NULL) {
        printf("Could not open file.\n");
        return -1; // -1 indicates error
    }

    while (!feof(inputFile)) {
        fscanf(inputFile, "%[^,],%[^,],%[^\n]\n", time, title, rating);
        title[44] = '\0';

        if (strcmp(title, previousTitle) != 0){
            if (i != 0){
                printf("\n");
                printf("%-44s | %5s | %s", title, rating, time);
                i = 0;
            }
            else {
                printf("\n");
                printf("%-44s | %5s | %s", title, rating, time);
            }
        }
        else {
            i = i + 1;
            printf(" %s", time);
        }
        strcpy(previousTitle, title);
    }
    
    return 0;   
}