// Creating a node in C

// We need #include <stdio.h> and <stdlib.h>

#include <stdio.h>
#include <stdlib.h>
#include "typedef struct node.c"

int main(){
    Node *head = NULL;  // Create a pointer to point to the first node

    head = malloc(sizeof(Node));    // It is not mandatory to typecast a node in C
    // head now contains the data of the first node

    head -> data = 45; // Initialize data as 45
    head -> link = NULL; // Tail

    printf("%d",head->data);    // Accessing the node
    return 0;
    
}