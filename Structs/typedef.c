// Typedef - Reserved keyword that gives an existing datatype a "nickname"
//==========================================================================
// Sample Code

#include <string.h>
#include <stdio.h>

typedef char user[25];  // If i need a char with size 25, I can just call user

// Giving it a nickname
/*struct User{
    char name[25];
    char password[12];
    int id;
};*/

int main(){

    // char user1[25] = "Emily";
    
    // Instead of constantly re-assigning names when you want to initialize variables, you can just type in the typedef name and give it a name as shown
    // With line 7, we can now change the previous line to:
    
    user user1 = "Emily";

    

    return 0;
}

