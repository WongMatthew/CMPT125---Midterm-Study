// Traversing a Single Linked List: Printing the Data
// Credit to Neso Academy: https://www.youtube.com/watch?v=FIV-0A0mZd8

#include <stdio.h>
#include <stdlib.h>
#include "typedef struct node.c"        // The node struct
#include "(definition) print_data.c"    // The function used here

//=============================================================================

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

    current = malloc(sizeof(Node));
    current->data = 3;
    current->link = NULL;
    head->link->link = current; // Update the linked list

    // Try adding more nodes to see how the output changes!

    print_data(head);
    return 0;
}