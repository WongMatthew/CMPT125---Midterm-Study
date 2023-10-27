// Typedef struct for linked list

typedef struct Node{
    int value;
    struct Node* next;
} Node_t;

typedef struct{
    Node_t* head;
    Node_t* tail;
} LList_t;


// Typedef struct for stack

typedef struct{
    LList_t* data;
} LLStack_t;

// Typedef struct for queue

typedef struct{
    LList_t* data;
} LLQueue_t;

// Typedef struct for dynamic array

typedef struct{
    LList_t* data;
} LLDArray_t;

