// Inserting a node to the end of the linked list

// Credit to Neso Academy: https://www.youtube.com/watch?v=LYGbeWnYXd8&

#include <stdio.h>
#include <stdlib.h>
#include "typedef struct node.c"        // The struct for node
#include "(definition) addToEnd.c"      // Right click to go to definition

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

    addToEnd(head,67);
    
    return 0;
}