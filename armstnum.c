#include <stdio.h>
int main(){
    int n,temp,count=0;
    printf("enter the number ");
    sacnf("%d",&n);
    temp=n;
    while(temp!=0){
        temp=temp/10;
        count++;
    }
    int a[count];
    temp=n;
    for(int i=0;i<count;i++){
    while(temp!=0){
      int rev=temp%10;
      
    }
}
}