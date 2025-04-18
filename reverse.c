#include <stdio.h>
#include <math.h>
int main(){
    int n,count=0,temp;
    printf("Eneter the number n ");
    scanf("%d",&n);
    temp=n;
    while(temp!=0){
        temp=temp/10;
        count++;
    }
    for(int i=1;i<=count;i++){
        int rev=n%10;
        printf("%d",rev);
        n=n/10;
    }
    return 0;
}