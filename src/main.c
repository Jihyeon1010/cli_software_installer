#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

// Detect the operating system of the user
#ifdef _WIN32
    #define CLEAR "cls"
    #define Manager ""
    #define INSTALL_CMD(cmd) "powershell -Command \"Start-Process -Verb RunAs -FilePath winget -ArgumentList '" cmd "'\""
#elif __APPLE__
    #define CLEAR "clear"
    #define Manager ""
    #define INSTALL_CMD(cmd) "brew install --cask " cmd
#elif __linux__
    #define CLEAR "clear"
    #define INSTALL_CMD(cmd) "sudo apt update && sudo apt upgrade && sudo apt install -y " cmd
#else
    #error "Unsupported OS"
#endif

// Function of printf Main Commands line interface menu
void main_menu()
{
    system(CLEAR);
    printf("\n==== Main Menu ====\n");
    printf("\n");
    printf("1. Install Web Browser\n");
    printf("2. Install Producivity softwares\n");
    printf("3. Install Graphics and design softwares\n");
    printf("4. Development softwares\n");
    printf("5. Utilities\n");
    printf("6. Manuals\n");
    printf("7. Exit\n");
    printf("\n");
    printf("Select an option: ");
}

// Function of prinf Software list
void software_list()
{
    printf("");
    printf("\n");
    printf("\n");
    printf("Select an option: ");
}

// Function of install software based on the operating system of the user
void install_software()
{
    printf("Installing software...\n");
}

// List of Web Browsers
char *web_browsers[] = {
    "Google Chrome",
    "Mozilla Firefox",
    "Opera",
    "Brave",
    "Vivaldi",
    "Microsoft Edge",
    "Safari",
    "Tor Browser",
    "Chromium",
    "Waterfox"
};

// List of Productivity softwares
char *productivity_softwares[] = {
    "Microsoft Office",
    "LibreOffice",
    "WPS Office",
    "OnlyOffice",
    "Google Workspace",
    "Zoho Workplace",
    "SoftMaker Office",
    "FreeOffice",
    "Calligra Suite",
    "Apache OpenOffice"
}; 

int main() 
{
    return 0;
}