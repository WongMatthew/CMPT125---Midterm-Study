#include <string.h>
#include <stdio.h>

int printing(char* name, int price, int num){
    printf("Name: %s\nPrice: $%d\nItem Number: %d\n", name, price, num);
    return 0;
}

typedef struct {
    char name[50];
    int price;
    int item_number;
} food;

struct food* pricepointer = NULL;

int main(){
    food menu;
    strcpy (menu.name, "Burger");
    
    pricepointer = (struct food*) malloc (sizeof(struct student));
    pricepointer -> price = 500;
    menu.item_number = 01;

    printing(menu.name, menu.price, menu.item_number);
    return 0;




}

