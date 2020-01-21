

#include<stdio.h>
#include<stdlib.h>
#include <time.h> 


int main(){
    srand(time(NULL));
    int rNum = (rand()%20)+1;
    int iNum;
    int counter = 0;


    do{
        printf("Enter a Number between 0 and 20:\n");
        scanf("%i", &iNum);
        if (iNum > rNum){
            counter++;
            printf("Too High\n");
            printf("You have %i guesses.\n", 5 - counter);
        }
        if (iNum < rNum){
            counter++;
            printf("Too Low\n");
            printf("You have %i guesses.\n", 5 - counter);
        }
        if (iNum == rNum){
            printf("You win\n");
            break;
        }
    }while(counter < 5);
    if(counter >= 5){
        printf("You Lose.\n");
    }
}





