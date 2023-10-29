//Typedef structs with nicknames

// Writing out "struct" too tedious? Give the struct a nickname

//==========================================================================

#include <stdio.h>
#include <string.h>

/*==========================================================================
Previous code for comparison

struct User{
    char name[25];
    char password[12];
    int id;
};

int main(){
    struct User user1 = {"Emily","Password123", 123456789};
    struct User user2 = {"Jason","Password321", 987654321};
    return 0;
}
==========================================================================*/

typedef struct {            // Add "typedef" in front of the struct and remove the name "User"
    char name[25];
    char password[12];
    int id;
}User;                      // Add "nickname"

int main(){
    User user1 = {"Emily","Password123", 123456789};        // Remove "struct" from the beginning
    User user2 = {"Jason","Password321", 987654321};        // Remove "struct" from the beginning

    // Accessing the typedef struct:
    printf("%s\n%s\n%d\n", user1.name, user1.password, user1.id);
    printf("%s\n%s\n%d\n", user2.name, user2.password, user2.id);
    
    return 0;
}