#include <stdio.h>
#include <stdlib.h>
#include "typedef struct node.c"


void countingNodes(Node *head){
    int count = 0; 

    // Condition 1: If the head is NULL, then the list is empty.
    if (head == NULL) printf("The linked list is empty.\n");

    Node *headptr = NULL;

    headptr = head;

    // Runs until the head pointer reaches NULL
    while (headptr != NULL){
        count++;        // First node visited
        headptr = headptr -> link;      // Traverse through the list
    }
    printf("There are %d nodes in this linked list.\n", count);
}