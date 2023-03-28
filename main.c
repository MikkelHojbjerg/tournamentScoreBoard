#include <stdlib.h>
#include <stdio.h>

int menu();
int signUp();
int seeGroups();
int scoreBoard();
int quit();

int main(int argc, char *argv[]) {

    printf("Hello *input event thing here*!\n");
    printf("What is your next step?\n");

    int choice;
    choice = menu();

    while(choice != quit) {
        
        switch(choice) {
            case 1:
                signUp();
                break;

            case 2:
                seeGroups();
                break;

            case 3:
                scoreBoard();
                break;

            case 4:
                quit();
                break;

            default:
                printf("Invalid choice\n");
                break;

        }

        choice = menu();
    }

    printf("Bye!\n");
    return 0;
}

int menu(){

        int choice;
        printf("1. Sign up\n");
        printf("2. See groups\n");
        printf("3. Score board\n");
        printf("4. Quit\n");
        printf("PLease enter the number equivalent to your choice: ");
        scanf("%d", &choice);

        return choice;
}

int signUp(){

    return 0;
}

int seeGroups(){

    return 0;
}

int scoreBoard(){

    return 0;
}

int quit(){

    exit(0);
}