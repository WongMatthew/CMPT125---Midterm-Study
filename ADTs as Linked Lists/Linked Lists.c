// Linked Lists are data structures that allow storage of a large number of data of the same tyoe
// Includes fast inserts/deletes, without size limitations (excluding system memory limitations)

// Concept: Nodes which store two things: 1. Value of an item and 2. Memory address of next node

/*
Basic operations of a linked list:

Create: 
- Start with an empty list that has no nodes 
- When there is no address to store, use NULL

**
Insert first Node:
- Create a new node storing the value of the inserted item
- Next pointer set to NULL
- Update head and tail to remember the node

**
Insert another node (v1 - Insert to front): 
- Create a new node storing the value of the inserted item, and the next pointer set to NULL
- Since new node is new front, update next pointer accordingly
- Update head to remember the node (the tail will stay the same)

Insert another node (v2 - Insert to back):
- Create a new node storing the value of the inserted item, and the next pointer set to NULL
- Since new node is new tail, update tail's next pointer accordingly
- Update tail to remember the node (head will stay the same)

**
Remove a node (v1 - Remove from front):
- Use an extra node pointer to remember where the node is
    - Once we update the head, it will disappear and no one can find it 
- Update the next pointer of this node to NULL since it is no longer a part of the list
- Update head to remember new front (tail is same, unless list is empty, then update both to NULL)
    - Return the address of the node or just the value
    - Free the node

Remove a node (v2 - Remove from back):
- Use an extra node pointer to remember where the node is
    - Once we update the head, it will disappear and no one can find it 
- Update the next pointer of the previous node of this node to NULL since it is no longer a part of the list
- Update tail to remember new end (head is same, unless list is empty, then update both to NULL)
    - Return address of node, or just the value
    - Free the node

*/

// 

// Sample code

#include <stdio.h>
#include <stdlib.h>
#include "typedefs.h"

// Function to create an empty list and returns the address of the list
LList_t* LL_create(){
    LList_t* theList = malloc(sizeof(LList_t));
    theList -> head = NULL;
    theList -> tail = NULL;
}


// Function to add an int value to the front of the list as a node
void LL_insertFront(LList_t* theList, int value){
    if (theList == NULL) return;

    Node_t* newNode = malloc(sizeof(Node_t));
    newNode -> value = value;
    newNode -> next = NULL;

    if (theList -> head == NULL){    // If the list is empty
        theList -> head = newNode;
        theList -> tail = newNode;
    }
    else{                           // If the list is not empty
        newNode -> next = theList ->head;
        theList -> head = newNode;
    }
}

// Function to remove the node in the front of the list, and return the value
int LL_removeFront(LList_t* theList){
    if (theList == NULL || theList -> head == NULL){
        return -99999;
    }

    Node_t* toRemove = theList -> head;
    if(theList -> head == theList -> tail){ // One item
        theList -> head = NULL;
        theList -> tail == NULL;
    }
    else{                                   // More than one item
        theList -> head = theList -> head -> next;
    }
    int theValue = toRemove -> value;
    free(toRemove);
    return theValue;
}

// Function to see if the list is empty
int LL_isEmpty(LList_t* theList){
    if (theList == NULL || theList -> head == NULL) return 1;
    else return 0;
}

// Function to free up the list 
void LL_free(LList_t* theList) {
    if (theList == NULL) return;

    Node_t* current = theList -> head;
    while (current != NULL){
        Node_t* toFree = current;
        current = current -> next;
        free(toFree);
    }
    free(theList);
}