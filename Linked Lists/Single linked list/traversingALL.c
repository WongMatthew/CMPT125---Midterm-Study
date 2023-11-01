// Traversing a Single Linked List: Visiting each node of a single linked list until the end node is reached

#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node *link;
} Node;

void countingNodes(Node *head){
    int count = 0;
    if (head == NULL) printf("The linked list is empty.\n");
    Node *headptr = NULL;
    headptr = head;
    while (headptr != NULL){
        count++;
        headptr = headptr -> link;
    }
    printf("There are %d nodes in this linked list.\n", count);
}

int main() {
    // First node
    Node *head = malloc(sizeof(Node));
    head->data = 45;
    head->link = NULL;

    Node *current = malloc(sizeof(Node));
    current->data = 98;
    current->link = NULL;
    head->link = current;

    // Method 2: Reusing pointers
    current = malloc(sizeof(Node));
    current->data = 3;
    current->link = NULL;
    
    // Update the linked list
    head->link->link = current;

    countingNodes(head);

    return 0;
}