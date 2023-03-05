#include<stdio.h>

int main(){
    int age;
    int vipPass;
    printf("Enter your age\n");
    scanf("%d", &age);
    if((age <= 70 && age>=18) || (vipPass==1)){
        printf("Your are above 18 and below 70, you can drive\n");
    }
    else{
        printf("you cannot drive\n");
    }
    return 0;
}