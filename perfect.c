#include <stdio.h>
int main(){
    int num,sum=0;
    printf("Enter the number ");
    scanf("%d",&num);
    
    for(int i=1;i<num;i++){
        if(num%i==0){
        sum+=i;
        }
    }
    if(sum==num){
        printf("The given number is perfect number");
    }else{
        printf("The number is not perfect");
    }
}