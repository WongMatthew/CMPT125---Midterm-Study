#include <stdio.h>
#include <stdlib.h>
#include "typedef struct node.c"

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