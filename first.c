#include <stdio.h>
int main(int argc, char const *argv[])
{
  int a =10;
  int *ptr=&a;
  printf("the value of a is %d \n",a);
  printf("the value of a is %d \n" , *ptr);
  printf("the value of a is %d \n" , &a);
  printf("the value of a is %d \n" , &*&a);
  return 0;
}

