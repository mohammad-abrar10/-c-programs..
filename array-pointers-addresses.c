#include <stdio.h>
int main(int argc, char const *argv[])
{

  // how many elements in an array from user input

  int n;
  printf("enter the number of elements you want to have in your array");
  scanf("%d",&n);
  // declaring an array from user
  int arr[n];
  int *p =arr;

  // user input for array elements 

  for (int i=0;i<n;i++){
    printf("enter the %dth elememt of an array",i);
    printf("\n");
    scanf("%d",p+i);
  }

  // printing elements with address of every element
  
  for (int i = 0; i < n; i++) {
   printf("the valuse of arr[%d] is %d and address is %p  \n",i,*(p+i),&arr[i]);
  }
  return 0;
}
