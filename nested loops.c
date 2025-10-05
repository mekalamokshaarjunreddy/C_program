#include<stdio.h>

int main()
{
    
    int a;
    printf( "enter a number");
    scanf( "%d",& a);
    if ( a>0){
      printf("it is positive");
      if (a%2==0){
        printf(" it is even ");
      }else { 
         printf("it is odd");
      }
    }
    else if (a<0)   {
         printf("it is negative");
         if (a%2==0){
        printf(" it is even ");
         }else { 
         printf("it is odd");
         }
    }
    else 
      printf(" it is a zero") ;  
    return 0;
}