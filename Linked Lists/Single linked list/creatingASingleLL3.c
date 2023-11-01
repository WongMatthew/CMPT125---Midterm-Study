// Creating a complete single link list - Method 2

// We need #include <stdio.h> and <stdlib.h>

#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int data;
    struct node *link;
}Node;

int main(){
    Node *head = malloc(sizeof(Node)); 
    head -> data = 45; 
    head -> link = NULL;
    
    Node *current = malloc(sizeof(Node));
    current -> data = 98;
    current -> link = NULL;
    head -> link = current;

    // Method 2: Simple, but unnecessarily wastes memory
    current2 -> data = 3;
    current2 -> link = NULL;
    current -> link = current2;
    
    return 0;
}