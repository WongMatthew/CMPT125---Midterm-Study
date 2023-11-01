#include <stdio.h>
#include <stdlib.h>

// From Neso Academy: https://www.youtube.com/watch?v=LYGbeWnYXd8&

void addToEnd(Node *head, int data){
    Node *head_address, *temp;
    head_address = head;        // Assign the head_address to the address of the first node

    temp -> data = data;        // Update the data with the desired value
    temp -> link = NULL;        // Update the link to NULL

    // Traverse the list. 
    while (head_address -> link != NULL){
        head_address = head_address -> link;
    }
    // Set the head address to the temp value
    head_address -> link = temp;

}