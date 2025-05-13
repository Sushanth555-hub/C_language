//finding The Armstrong number
#include <stdio.h>
#include <math.h>

//main function is starting
int main(){
  int n,count=0,temp;
  double sum=0;
  printf("Enter the number ");
  scanf("%d",&n);

  //counting The number of element
  temp=n;
  while(temp!=0){
    temp=temp/10;
    count++;
  }

  //taking each number out and doing the operation
  temp=n;
  while(temp!=0){
    int rev=temp%10;
    sum=sum+pow(rev,count);
    temp=temp/10;
  }

  //comparing with number and displaying
  if((int)(round(sum))==n){
    printf("Given Number is armstron number");
  }else{
    printf("Given number is not armstrong number");
  }
}
