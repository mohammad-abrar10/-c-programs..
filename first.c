#include <stdio.h>
int main(int argc, char const *argv[])
{
  // int a =10;
  // int *ptr=&a;
  // printf("the value of a is %d \n",a);
  // printf("the value of a is %d \n" , *ptr);
  // printf("the value of a is %d \n" , &a);
  // printf("the value of a is %d \n" , &*&a);


//  printing addresses of a array stored elements
  // int arr[10];
  // for(int i=0;i<10;i++){
  //    printf("the address of arr[%d] =%p \n",i,&arr[i]);
  // }



  int a =10;
  // printf("the vlue of a =%d \n",a);
  // printf("the address  of a = %p \n",&a);
  // printf("the value  of a = %d \n",*(&a));

  int *b;
  b=&a;
  printf("%p\n",b);
  printf("%d\n",*b);

  int **c;
  c=&b;
  printf("%p\n",c);
  printf("%d\n",*(*c));

  int ***d;
  d=&c;
  printf("%p\n",d);
  printf("%d\n",*(*(*d)));


  return 0;
}

