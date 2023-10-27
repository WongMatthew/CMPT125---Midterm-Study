// Queue - Data type that sores a bunch of items and provides access to them in a specific way

// Method: First in, first out (FIFO)

// enqueue: Insert to the end of the LL
// dequeue: Remove from the front of the LL
// isEmpty: Check if the LL is empty 

#include <stdio.h>
#include <stdlib.h>
#include "typedefs.h"

// Sample code

LLQueue_t* create(){
    LLQueue_t* newQueue = malloc(sizeof(LLQueue_t));
    newQueue -> data = LL_create();
    return newQueue;
}

// enqueue: Insert to the end of the LL
void enqueue(LLQueue_t* theQueue, int value){
    if (theQueue == NULL) return;
    LL_insertEnd(theQueue -> data, value);
}

// dequeue: Remove from the front of the LL
int dequeue (LLQueue_t* theQueue){
    if (theQueue == NULL) return;
    return LL_removeFront(theQueue -> data);    
}

int isEmpty(LLQueue_t* theQueue){
    if (theQueue == NULL) return;
    return LL_isEmpty(theQueue -> data);
}


void free(LLQueue_t* theQueue){
    if (theQueue == NULL) return;
    LL_free(theQueue -> data);
    free(theQueue);
}
