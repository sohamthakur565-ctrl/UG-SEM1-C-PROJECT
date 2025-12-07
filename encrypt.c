#include <stdio.h>
#include <stdlib.h>
#include "encrypt.h"
#include "fileops.h"

void encryptFile(const char *in, const char *out, int key)
{
    FILE *inputFile = fopen(in, "rb");
    if (inputFile == NULL)
    {
        printf("Error: Cannot open input file '%s'\n", in);
        return;
    }

    FILE *outputFile = fopen(out, "wb");
    if (outputFile == NULL)
    {
        printf("Error: Cannot create output file '%s'\n", out);
        fclose(inputFile);
        return;
    }

    int ch;
    while ((ch = fgetc(inputFile)) != EOF)
    {
        int encrypted = ch ^ key;
        fputc(encrypted, outputFile);
    }

    fclose(inputFile);
    fclose(outputFile);
    printf("File encrypted successfully!\n");
}

void decryptFile(const char *in, const char *out, int key)
{
    FILE *inputFile = fopen(in, "rb");
    if (inputFile == NULL)
    {
        printf("Error: Cannot open input file '%s'\n", in);
        return;
    }

    FILE *outputFile = fopen(out, "wb");
    if (outputFile == NULL)
    {
        printf("Error: Cannot create output file '%s'\n", out);
        fclose(inputFile);
        return;
    }

    int ch;
    while ((ch = fgetc(inputFile)) != EOF)
    {
        int decrypted = ch ^ key;
        fputc(decrypted, outputFile);
    }

    fclose(inputFile);
    fclose(outputFile);
    printf("File decrypted successfully!\n");
}
