#include <stdio.h>
#include <math.h>
int isPrime(int n){
    if(n<2){
        return 0;
    }
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0){
            return 0;
        }
    }
 return 1;
}
int main(){
    int num1,num2,start,end;
    printf("Enter the two numbers ");
    scanf("%d %d", &num1, &num2);
    if(num1>num2){
     start=num2;
     end=num1;
    }else{
     start=num1;
     end=num2;
    }
    for(int i=start;i<=end;i++){
        if(isPrime(i)){
            printf("%d ",i);
        }
    }
}