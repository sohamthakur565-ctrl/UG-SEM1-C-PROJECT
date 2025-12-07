#include <stdio.h>
#include <stdlib.h>
#include "ui.h"

void showMenu(void)
{
    printf("\n");
    printf("========================================\n");
    printf("        FILE ENCRYPTOR TOOL\n");
    printf("========================================\n");
    printf("1. Encrypt a file\n");
    printf("2. Decrypt a file\n");
    printf("3. View file content\n");
    printf("4. Exit\n");
    printf("========================================\n");
    printf("Enter your choice: ");
}

void clearScreen(void)
{
    #ifdef _WIN32
        system("cls");
    #else
        system("clear");
    #endif
}

void pauseScreen(void)
{
    printf("\nPress Enter to continue...");
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
    getchar();
}

