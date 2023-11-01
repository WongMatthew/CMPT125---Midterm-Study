// Creating a complete single link list

/* Credit to Neso Academy
PART 1: https://www.youtube.com/watch?v=nxtDe6Gq4t4
PART 2: https://www.youtube.com/watch?v=HrY_YmU1vdg
*/

// We need #include <stdio.h> and <stdlib.h>

#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int data;
    struct node *link;
}Node;

int main(){
    Node *head = malloc(sizeof(Node)); 
    head -> data = 45; 
    head -> link = NULL;
    
    // Issue here: With this method, we lose access to the first
    /*
    head = malloc(sizeof(Node));
    head -> data = 98;
    head -> link = NULL;
    */
    // So instead, we can do this:
    Node *current = malloc(sizeof(Node));
    current -> data = 98;
    current -> link = NULL;
    head -> link = current;
    
    return 0;
}