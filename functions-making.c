#include <stdio.h>
#define MAX 100
#include <stdlib.h>

// prototypes 
void insertOp(int arr[]);
void displayOp(int arr[]);
void sumOp(int arr[]);
void searchOf(int arr[]);

int limit,i;
int main(int argc, char const *argv[])
{
  int arr[MAX];
  int ch;
  printf("enter the size of an array ");
  scanf("%d",&limit);

 START:
 system("clear");



  printf("press 1 for insertion  \n   press 2 for displaying  \n   press 3 for addition    \n   press 4 for searching  \n:  ");
  scanf("%d",&ch);
  switch(ch){
    case 1 :
    printf("*********** insertion in array *************\n");
    insertOp(arr);
    break;

    case 2:
    printf("*********** displaying in array *************\n");
    displayOp(arr);
    break;

    case 3:
    printf("*********** addition of  an array *************\n");
    sumOp(arr);
    break;

    case 4:
    printf("*********** searching element in an array *************\n");
    searchOf(arr);
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

  // insertion function

  void insertOp(int arr[]){
    for(i=0;i<limit;i++){
      printf("\n enter the arr[%d]  :  ",i);
      scanf("%d",&arr[i]);

    }
  }

  // displaying an array 
  void displayOp(int arr[]){
    for(i=0;i<limit;i++){
      printf("\n enter the arr[%d]  : %d \n",i,arr[i]);

    }
  }

  // addition of an array 

  void sumOp(int arr[]){
    int sum=0;
    for(i=0;i<limit;i++){
      sum=sum+arr[i];
    }
    printf("sum of array elements = %d \n",sum);
  }

  // searching of element in an array 

 void searchOf(int arr[]){
  int element;
   printf("enter the element which you are looking for ");
   scanf("%d",&element);
   for(i=0;i<limit;i++){
    if(element==arr[i]){
      printf("element %d found at index %d \n ",arr[i] ,i);
      break;
    }
   }
 }




