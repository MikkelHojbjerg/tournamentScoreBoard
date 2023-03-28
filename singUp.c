#include "groupInfo.h"
#include <stdlib.h>
#include <stdio.h>

int signUp(){

    char groupName;
    int amount;
    char names[amount];

    printf("Let's get your group sign up!\n");

    printf("Enter group name: ");
    scanf("%c\n", groupName);

    printf("How many people does your team consist of?: ");
    scanf("%d\n", amount);

    printf("What is the names of the members of %c?\n", groupName);

    for(int i = 0; i < amount; i++){
        
        scanf("%c\n", names);
    }



    return 0;
}