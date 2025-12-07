#include <stdio.h>
#include <stdlib.h>
#include "fileops.h"

int fileExists(const char *filename)
{
    FILE *file = fopen(filename, "r");
    if (file != NULL)
    {
        fclose(file);
        return 1;
    }
    return 0;
}

void printFile(const char *filename)
{
    FILE *file = fopen(filename, "r");
    if (file == NULL)
    {
        printf("Error: Cannot open file '%s'\n", filename);
        return;
    }

    printf("\n--- Content of '%s' ---\n", filename);
    int ch;
    while ((ch = fgetc(file)) != EOF)
    {
        putchar(ch);
    }
    printf("\n--- End of file ---\n");
    fclose(file);
}

