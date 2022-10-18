/** lab21-1.c
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
    char line[1000];
    //int i;
    //int commacount = 0;

    scanf("%s", fileName);

    inputFile = fopen(fileName, "r");

    if (inputFile == NULL) {
        printf("Could not open file.\n");
        return -1; // -1 indicates error
    }

    while (!feof(inputFile)) {
        //commacount = 0;
        fscanf(inputFile, "%*d,%[^,],%*[^\n]\n", line);
        printf("%s", line);

        /*
        fgets(line, 1000, inputFile);
        for (i = 0; i < strlen(line); i++) {
            if (line[i] == ',') {
                commacount = commacount + 1;
            }
            if (commacount == 1 && line[i] != ','){
                printf("%c", line[i]);
            }
        }
        */

        printf("\n");
    }
    return 0;
}