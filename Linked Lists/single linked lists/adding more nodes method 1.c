// Creating a complete single link list - Method 1

// We need #include <stdio.h> and <stdlib.h>

#include <stdio.h>
#include <stdlib.h>
#include "typedef struct node.c"

int main(){
    Node *head = malloc(sizeof(Node));      // Allocate size for the pointer head
    head->data = 45;                        // Initialize head -> data in node 1 as 45
    head->link = NULL;                      // Initialize head -> data as NULL. This is the tail

    // Second node
    Node *current = malloc(sizeof(Node));   // Allocate size for the pointer current
    current->data = 98;                     // Initialize current -> data in node 2 as 98
    current->link = NULL;                   // Initialize current -> data as NULL. This is the tail                   
    head->link = current;                   // Update node 1's tail to the data point in node 2.

    // Method 1: Continuously creates more and more pointer types
    // Simple, but unnecessarily wastes memory
    Node *current2 = malloc(sizeof(Node));
    current2 -> data = 3;
    current2 -> link = NULL;
    current -> link = current2;
    
    return 0;
}