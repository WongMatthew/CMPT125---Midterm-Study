// Traversing a Single Linked List: Visiting each node of a single linked list until the end node is reached
// Credit to Neso Academy: https://www.youtube.com/watch?v=e0s-zmpedYo

#include <stdio.h>
#include <stdlib.h>
#include "typedef struct node.c"
#include "(definition) countingNodes.c"

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