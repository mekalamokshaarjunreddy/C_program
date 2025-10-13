#include <stdio.h>

int main() {
    int sum=0,start,end,i;

    printf("Enter a number: ");
    scanf("%d", &start);
    printf("enter ending number");
    scanf("%d",&end);
    for(i=start;i<=end;i++){
       if (i%2==0){
          sum =sum +i;}
          }
 printf("sum of evenis =%d",sum);
 return 0;
          
}