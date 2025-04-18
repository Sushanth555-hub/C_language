#include <stdio.h>
#include <math.h>
int main(){
  int n,count=0,temp;
  double sum=0;
  printf("Enter the number ");
  scanf("%d",&n);
  temp=n;
  while(temp!=0){
    temp=temp/10;
    count++;
  }
  temp=n;
  while(temp!=0){
    int rev=temp%10;
    sum=sum+pow(rev,count);
    temp=temp/10;
  }
  if((int)(round(sum))==n){
    printf("Given Number is armstron number");
  }else{
    printf("Given number is not armstrong number");
  }
}