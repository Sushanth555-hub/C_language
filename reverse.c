#include <stdio.h>
int main(){
    int n;
    printf("Enter the number for which you have to reverse ");
    scanf("%d",&n);
    while(n!=0){
        int rev=n%10;
        printf("%d",rev);
        n=n/10;
    }
    return 0;
}