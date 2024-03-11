#include <stdio.h>
#define MAX 100
#include <stdlib.h>
int size,i;
int main(int argc, char const *argv[])
{
  int arr[MAX];
  int ch;

 START:
 system("clear");

  printf("enter the size of an array ");
  scanf("%d",&size);

  // printf("the size of a array is arr[%d]",size);

  printf("press 1 for insertion  \n   press 2 for displaying\n   :  ");
  scanf("%d",&ch);
  switch(ch){
    case 1 :
    printf("insertion in array \n");
    break;

    case 2:
    printf("displaying an array \n");
    break;

    default:
    printf("invalid choice,try again \n");
    break;
  }

  printf("enter 1 to continue :    \n");
  scanf("%d",&ch);

  if(ch ==1){
    goto  START;
  }


  return 0;
}
