#include<stdio.h>

struct vector{
    int x;
    int y;
};

int main(){
    struct  vector v1, v2;
    v1.x = 34;
    v2.y = 54;
    printf("x dim is %d and y dim is %d", v1.x, v1.y);
    
    v1.x = 3345;
    v2.y = 534;
    printf("x dim is %d and y dim is %d", v2.x, v2.y);
    
    return 0;
}