#include <stdio.h>
#include <stdlib.h>

void deletePosition(Node **head, int pos){  // Double pointer: pointer to a pointer
    Node *current = *head;  // Pointing to the first node in the list
    Node *previous = *head;

    // Case 1: List is already empty
    if (*head == NULL) printf("List is already empty.\n"); 

    // Case 2: Want to delete the first node of the list
    else if (pos == 1){
        *head = current -> link;            // Update pointer of the head to the address of the next data point
        free(current); current = NULL;     // Free current and set to null 
    }

    // Otherwise,
    else{
        while (pos != 1){                       // While the position is NOT 1,
            previous = current;                 // update previous to have the current address
            current = current -> link;          // update current to have the next link
            pos--;                              // decriment position by 1 to leave while loop
        }

        previous -> link = current -> link;     // Previous link will become the current link
        free(current); current = NULL;          // Free current and set to null 
    }
}