#include <stdio.h>
int main(){
    int num,temp,digit=0;
    printf("Enter the number ");
    scanf("%d",&num);
    temp=num;
    while(temp!=0){
     int c=temp%10;
     digit=digit*10+c;
     temp=temp/10;
    }
    if(digit==num){
        printf("The given number is pallindrom");
    }else{
        printf("The givenn number is not pallindrom");
    }
}