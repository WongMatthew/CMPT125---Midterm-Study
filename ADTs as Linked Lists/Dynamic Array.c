// Dynamic Array - Data type that stores a bunch of items and provides access to it.

// Method: Specific position

// setValue: Insert into a specific position of the LL as indicated by an index
// getValue: Remove a specific position of the LL as indicated by an index
// isEmpty: Check if the LL is empty

#include <stdio.h>
#include <stdlib.h>
#include "typedefs.h"

// Sample code

LLDArray_t* create(){
    LLDArray_t* newArray = malloc(sizeof(LLDArray_t));
    newArray -> data = LL_create();
    return newArray;
}

// Similar to Linked Lists' InsertAt
void setValue(LLDArray_t* theArray, int value, int index){
    if (theArray == NULL) return;
    LL_insertAt (theArray -> data, value, index);
}

// Similar to Linked Lists' RemoveAt
int getValue(LLDArray_t* theArray, int index){
    if (theArray == NULL) return;
    return LL_removeAt(theArray -> data, index);
}

// Similar to Linked Lists' isEmpty
int isEmpty(LLDArray_t* theArray){
    if (theArray == NULL) return;
    return LL_isEmpty(theArray -> data);
}


void free(LLDArray_t* theArray){
    if (theArray == NULL) return;
    LL_free(theArray -> data);
    free(theArray);    
}