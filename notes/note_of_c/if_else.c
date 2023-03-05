#include<stdio.h>

int main(){
    int num;

    printf("Enter your number \n");
    scanf("%d", &num);

    if(num==1){
        printf("your number is 1 \n");
    }else if(num == 2){
        printf("your number is 2\n");
    }else if(num == 3){
        // (char [18])"your number is 3\n"
        printf("Your number is 3\n");
    }else{
        printf(" Any way this is else\n");
    }
    return 0;
}