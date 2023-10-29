// Struct (structure) - Collection of related members  ("variables")
// Can list different data types listed under one name in a block of memory

// using a . is a member access operator

//================================================================================
#include <stdio.h>
#include <string.h>

// creating a struct outside the main function

struct Player{
    char name[12];
    int score;

};

int main(){

    struct Player player1;           // Different blocks of memory
    struct Player player2;

    strcpy(player1.name, "Joe");     // Setting player1's name to Joe
    player1.score = 4;

    strcpy(player2.name, "Mama");    // Setting player2's name to Mama
    player2.score = 2;               // Setting player2's score to 2

    printf("%s\n %d\n", player1.name, player1.score);
    printf("%s\n %d\n", player2.name, player2.score);

    return 0;
}