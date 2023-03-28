#ifndef __GROUPINFO_H_
#define __GROUPINFO_H_
#include <stdbool.h>
#include <stdlib.h>
#include <stdio.h>

typedef struct node{

    char groupName;
    int amount;
    char* names;

    struct node* next; 
}node;

typedef struct {
    
    node *head;
}groupInfo;

#endif