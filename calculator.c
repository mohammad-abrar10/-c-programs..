#include <stdio.h>
int main()
{
   int x,y;
   printf("enter num");
   scanf("%d",&x);
   printf("enter num");
   scanf("%d",&y);
   char c;
   printf("enter char");
   scanf("%c",&c);
   
   int sum=x+y;
   int sub=x-y;
   int mul=x*y;
   int divide=x/y;
   

   switch(c)
   {
    case '+':
    printf("%d and %d is %d",x,y,sum);
    break;

    case '-':
    printf("%d and %d is %d",x,y,sub);
    break;

     case '*':
    printf("%d and %d is %d",x,y,mul);
    break;

     case '/':
    printf("%d and %d is %d",x,y,divide);
    break;
   }


}