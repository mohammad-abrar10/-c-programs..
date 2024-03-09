// call by reference without pointers 
#include <stdio.h>
void swap(int *a ,int *b);

int main(int argc, char const *argv[])
{
  int a=10;
  int b=20;
  printf("the value of a before function =%d and b =%d \n",a,b);
  printf("the adress of a before  function =%p and b =%p \n",&a,&b);
  swap(&a,&b);
  printf("the value of a after function =%d and b =%d \n",a,b);
  printf("the adress of a after function =%p and b =%p \n",&a,&b);

  return 0;
}
void swap(int *a ,int *b){
  int temp =*a;
  *a=*b;
  *b=temp;
  printf("the value of a in fuction is = %d and b =%d \n",*a,*b);
}
