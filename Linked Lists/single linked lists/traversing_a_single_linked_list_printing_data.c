// Traversing a Single Linked List: Printing the Data
// Credit to Neso Academy: https://www.youtube.com/watch?v=FIV-0A0mZd8

#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node *link;
} Node;

void print_data(Node *head){
    // Case1: Empty List
    if (head == NULL) printf("Linked List is Empty.\n");
    Node *address_pointer = NULL;

    address_pointer = head;
    while (address_pointer != NULL){
        printf("data: %d\naddress: %p\n\n", address_pointer -> data, address_pointer -> link);
        address_pointer = address_pointer -> link;
    }
}

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