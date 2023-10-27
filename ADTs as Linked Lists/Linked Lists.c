// Linked Lists are data structures that allow storage of a large number of data of the same tyoe
// Includes fast inserts/deletes, without size limitations (excluding system memory limitations)

// Concept: Nodes which store two things: 1. Value of an item and 2. Memory address of next node

// 

// 

#include <stdio.h>
#include <stdlib.h>
#include "typedefs.h"

// Sample code

LList_t* LL_create(){
    LList_t* theList = malloc(sizeof(LList_t));
    theList -> head = NULL;
    theList -> tail = NULL;
}


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

int LL_isEmpty(LList_t* theList){
    if (theList == NULL || theList -> head == NULL) return 1;
    else return 0;
}