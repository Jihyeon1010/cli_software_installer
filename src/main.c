#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

// Detect the operating system of the user
#ifdef _WIN32
    #define CLEAR "cls"
    #define INSTALL_CMD(cmd) "powershell -Command \"Start-Process -Verb RunAs -FilePath winget -ArgumentList '" cmd "'\""
#elif __APPLE__
    #define CLEAR "clear"
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
    printf("1. Install Web Browser\n");
    printf("2. Install Utilities\n");
    printf("3. Search for contact\n");
    printf("4. Edit a contact\n");
    printf("Manuals\n");
    printf("6. Exit\n");
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

int main() 
{
    return 0;
}