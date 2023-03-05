#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    int number, guess, nguesses = 0;
    srand(time(0));
    number = rand()%100 + 1; // Gererates a number between 1 and 100
    printf("The number is %d", number);

    do{
        printf("Guess the number between 1 to 100\n");
        scanf("%d", &guess);
        if(guess>number){
            printf("Lower number please!\n");
        }else if(guess<number){
            printf("Higer number please!\n");
        }
        else{
            printf("you guessed it in %d attempts\n", nguesses);
        }
        nguesses++;
    }while (guess!=number);
    
  
    
    return 0;
}