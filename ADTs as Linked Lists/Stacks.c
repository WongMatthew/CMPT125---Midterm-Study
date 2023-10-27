// Stack - A data type that stores a bunch of items and provides access to them in a specific way

// Method: Last in, first out (LIFO)

// Push: Insert to the front of the LL
// Pop: Remove from the front of the LL
// IsEmpty: Check if the stack is empty

#include <stdio.h>
#include <stdlib.h>
#include "typedefs.h"

// Sample code

LLStack_t* create(){
    LLStack_t* newStack = malloc(sizeof(LLStack_t));
    newStack -> data = LL_create();
    return newStack;
}

void push(LLStack_t* theStack, int value){
    if (theStack == NULL) return;
    LL_insertFront(theStack->data, value);
}

int pop (LLStack_t* theStack){
    if (theStack == NULL) return;
    return LL_removeFront(theStack -> data);
}

int isEmpty (LLStack_t* theStack){
    if (theStack == NULL) return;
    return LL_isempty(theStack->data);
}

void free(LLStack_t* theStack){
    if (theStack == NULL) return;
    LL_free(theStack -> data);
    free(theStack);
}