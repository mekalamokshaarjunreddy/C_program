#include<stdio.h>

int main() 
{
int a,arjun,rohith;
printf("enter a num");
scanf("%d",&a);
if(a%2==0){
  goto arjun ;
  } else{
    goto rohith;
    }
arjun :
printf("is good"  );
return 0;
rohith:
printf("legend")  ;
return 0;












}