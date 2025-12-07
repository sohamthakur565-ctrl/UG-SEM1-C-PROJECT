#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "encrypt.h"
#include "fileops.h"
#include "ui.h"

int main(void)
{
    int choice;
    char inputFile[256];
    char outputFile[256];
    int key;

    while (1)
    {
        clearScreen();
        showMenu();
        
        if (scanf("%d", &choice) != 1)
        {
            printf("Invalid input. Please enter a number.\n");
            pauseScreen();
            continue;
        }

        switch (choice)
        {
            case 1:
                printf("\nEnter input filename: ");
                scanf("%255s", inputFile);
                
                if (!fileExists(inputFile))
                {
                    printf("Error: Input file '%s' does not exist.\n", inputFile);
                    pauseScreen();
                    break;
                }

                printf("Enter output filename: ");
                scanf("%255s", outputFile);
                
                printf("Enter encryption key (integer): ");
                if (scanf("%d", &key) != 1)
                {
                    printf("Error: Invalid key. Must be an integer.\n");
                    pauseScreen();
                    break;
                }

                encryptFile(inputFile, outputFile, key);
                pauseScreen();
                break;

            case 2:
                printf("\nEnter input filename: ");
                scanf("%255s", inputFile);
                
                if (!fileExists(inputFile))
                {
                    printf("Error: Input file '%s' does not exist.\n", inputFile);
                    pauseScreen();
                    break;
                }

                printf("Enter output filename: ");
                scanf("%255s", outputFile);
                
                printf("Enter decryption key (integer): ");
                if (scanf("%d", &key) != 1)
                {
                    printf("Error: Invalid key. Must be an integer.\n");
                    pauseScreen();
                    break;
                }

                decryptFile(inputFile, outputFile, key);
                pauseScreen();
                break;

            case 3:
                printf("\nEnter filename to view: ");
                scanf("%255s", inputFile);
                
                if (!fileExists(inputFile))
                {
                    printf("Error: File '%s' does not exist.\n", inputFile);
                    pauseScreen();
                    break;
                }

                printFile(inputFile);
                pauseScreen();
                break;

            case 4:
                printf("\nThank you for using FileEncryptor!\n");
                exit(0);
                break;

            default:
                printf("\nInvalid choice. Please select 1-4.\n");
                pauseScreen();
                break;
        }
    }

    return 0;
}

