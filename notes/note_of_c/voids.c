#include<stdio.h>
void goodmorning();
void goodafter();
void goodNight();

int main(){
    goodmorning();
    
    return 0;
}

void goodmorning(){
    printf("Good Morning\n");
}
void goodafter(){
    printf("Good Afternoon\n");    
    goodafter();
    goodNight();
}
void goodNight(){
    printf("Good Night\n");
}