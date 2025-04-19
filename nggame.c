#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
    int guess,num;
    srand(time(0));
    num=rand()%100+1;
    guess=0;
    while(num!=guess){
        printf("Enter the number ");
        scanf("%d",&guess);
        if(guess==num){
            printf("Congratulation! You identified collect number");
        }
        else if(guess<num){
            printf("Your number is very less ");
        }else if(guess>num){
            printf("Your Number is quit high ");
        }
    }
}