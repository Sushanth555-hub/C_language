#include <stdio.h>
int main(){
    int n,val=1;
    printf("Enter the numbers of row in the triangle ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
      for(int j=1;j<=i;j++){
        printf("%d ",val);
        val++;
      }
      printf("\n");
    }
}