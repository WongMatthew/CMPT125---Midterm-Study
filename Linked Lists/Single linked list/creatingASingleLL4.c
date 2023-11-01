// Creating a complete single link list - Method 2

// We need #include <stdio.h> and <stdlib.h>

#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node *link;
} Node;

int main() {
    Node *head = malloc(sizeof(Node));      // Allocate size for the pointer head
    head->data = 45;                        // Initialize head -> data in node 1 as 45
    head->link = NULL;                      // Initialize head -> data as NULL. This is the tail

    // Second node
    Node *current = malloc(sizeof(Node));   // Allocate size for the pointer current
    current->data = 98;                     // Initialize current -> data in node 2 as 98
    current->link = NULL;                   // Initialize current -> data as NULL. This is the tail                   
    head->link = current;                   // Update node 1's tail to the data point in node 2.

    // Method 2: Reusing pointers
    // Third node
    current = malloc(sizeof(Node));         // Allocate more size for current
    current->data = 3;                      // Set current -> data to 3
    current->link = NULL;                   // Nullify the current -> link
    head->link->link = current;             // Update the tail to the 3rd node

    // Fourth node
    current = malloc(sizeof(Node));         
    current->data = 10;                     // Set current -> data to 10
    current->link = NULL;                   // Nullify the current -> link
    head->link->link->link = current;       // Update tail to point to 4th node

    current = malloc(sizeof(Node));
    current -> data = 49;
    current -> link = NULL;
    head -> link -> link -> link -> link = NULL;


    return 0;
}