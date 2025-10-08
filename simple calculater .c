#include<stdio.h>

int main()
{
    
int a,b,c,add,sub,mul,div; 
 printf("enter a:");
 scanf("%d",&a);
 printf("enter b:");
 scanf("%d",&b);
 printf("enter ur choice");
 scanf("%d",&c);
  switch(c){
   case 1:
   add=a+b;
    printf("a+b=%d",add);
    break;
   case 2:
    sub= a-b;
     printf("a-b=%d",sub) ;
     break;
   case 3:
     mul=a*b;
     printf("a*b=%d",mul);
     break;
   case 4:
     div =a/b;
     printf("a%b=%d",div) ;
     break;}
 return 0;
        
    
}