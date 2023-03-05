#include<stdio.h>
void display(); // Function prototype

int main(){
    int a;
    printf("Initializing display function\n");
    display();
    printf("Display fucntion finished its work\n");
    return 0;
}

void display(){
    char name[10] = "hello"
    printf("This is display %c \n"), name;
}