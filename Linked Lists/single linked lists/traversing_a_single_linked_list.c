// Traversing a Single Linked List: Visiting each node of a single linked list until the end node is reached
// Credit to Neso Academy: https://www.youtube.com/watch?v=e0s-zmpedYo

#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node *link;
} Node;

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

//=============================================================================

int main() {
    // First node
    Node *head = malloc(sizeof(Node));
    head->data = 45;
    head->link = NULL;

    Node *current = malloc(sizeof(Node));
    current->data = 98;
    current->link = NULL;
    head->link = current;

    current = malloc(sizeof(Node));
    current->data = 3;
    current->link = NULL;
    head->link->link = current; // Update the linked list

    // Try adding more nodes to see how the output changes!

    countingNodes(head);

    return 0;
}