// Typedef structs

// Without typedef keyword

//==========================================================================

#include <string.h>
#include <stdio.h>

struct User{
    char name[25];
    char password[12];
    int id;
};

int main(){
    struct User user1 = {"Emily","Password123", 123456789};
    struct User user2 = {"Jason","Password321", 987654321};

    // accessing the struct:
    printf("%s\n%s\n%d\n", user1.name, user1.password, user1.id);
    printf("%s\n%s\n%d\n", user2.name, user2.password, user2.id);

    // So many "structs" :(
    // See "typedef structs with nickname.c"

    return 0;
}