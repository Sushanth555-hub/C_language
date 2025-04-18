#include <stdio.h>
int main(void)
{
    int n;
    printf("Enter n ");
    scanf("%d",&n);
    int pv_pv=0,pv=1,sum=0;
    printf("%d %d ",pv_pv,pv);
    for(int i=1;i<=(n-2);i++){
      sum=pv_pv+pv;
      printf(" %d ",sum);
      pv_pv=pv;
      pv=sum;
    }
    return 0;
}