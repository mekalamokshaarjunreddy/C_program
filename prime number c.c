#include<stdio.h>

int main() 
{

int a;

printf("enter a number");
scanf("%d",&a);
if(a%2==1 && a%3==1 && a%5==1&& a%7==1){
  printf("it is prime");
  }
else{
  printf(" it is not prime")  ;}
  return 0;
  }