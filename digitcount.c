#include <stdio.h>
int main(){
    int num,count=0;
    printf("Enter the number ");
    scanf("%d",&num);
    while(num!=0){
        num=num/10;
        count++;
    }
    printf("Number of digt present in your number is %d",count);
}
