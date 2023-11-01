// Delete a node at a particular location

// Credit to Neso Academy: https://www.youtube.com/watch?v=f1r_jxCyOl0

#include <stdio.h>
#include <stdlib.h>
#include "typedef struct node.c"
#include "(definition) deletePosition.c"
// Uncomment this to check if the code works!
// #include "(definition) countingNodes.c"

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
    head->link->link = current; 

    // Try adding more nodes to see how the output changes!
    
    // Check to see if it worked!
    // countingNodes(head);
    deletePosition(&head, 2);

    // Check again!
    // countingNodes(head);

    return 0;
}