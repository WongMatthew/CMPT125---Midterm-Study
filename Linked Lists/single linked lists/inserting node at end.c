// Inserting a node to the end of the linked list

// Credit to Neso Academy: https://www.youtube.com/watch?v=LYGbeWnYXd8&

#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node *link;
} Node;

// =========================================

void addToEnd(Node *head, int data){
    Node *head_address, *temp;
    head_address = head;        // Assign the head_address to the address of the first node

    temp -> data = data;        // Update the data with the desired value
    temp -> link = NULL;        // Update the link to NULL

    // Traverse the list. 
    while (head_address -> link != NULL){
        head_address = head_address -> link;
    }
    // Set 
    head_address -> link = temp;

}

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


// =========================================

int main() {
    // First node
    Node *head = malloc(sizeof(Node));
    head->data = 45;
    head->link = NULL;

    // Second node
    Node *current = malloc(sizeof(Node));
    current->data = 98;
    current->link = NULL;
    head->link = current;

    // Third node
    current = malloc(sizeof(Node));
    current->data = 3;
    current->link = NULL;
    head->link->link = current; 

    countingNodes(head);

    addToEnd(head,67);

    countingNodes(head);
    

    return 0;
}