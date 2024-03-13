#include <stdio.h>
#define MAX 100
#include <stdlib.h>

// prototypes
void insertOp(int arr[]);
void displayOp(int arr[]);
void sumOp(int arr[]);
void searchOf(int arr[]);
void insertionAtIndex(int arr[]);
void deletionAtIndex(int arr[]);



int limit,i,element,position;
int main(int argc, char const *argv[])
{
  int arr[MAX];
  int ch;
  printf("enter the size of an array ");
  scanf("%d",&limit);

 START:
 system("clear");


// --------------------using switching case here --------------------------

  printf("press 1 for insertion  \n   press 2 for displaying  \n   press 3 for addition    \n   press 4 for searching  \n:   press 5 for insertion at specific index  :  \n  press 6 for deletion at specific index");
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

    case 5:
    printf("*********** insertion at specific index *************\n");
    insertionAtIndex(arr);
    break;

    case 6:
    printf("*********** deletion  at specific index *************\n");
    deletionAtIndex(arr);
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
  else{
    system("exit");
  }


  return 0;
}

// -------------------------all the functions starts from here----------------------------- 

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
  int flag=0;
   printf("enter the element which you are looking for ");
   scanf("%d",&element);
   for(i=0;i<limit;i++){
    if(element==arr[i]){
      flag=1;
    }
   }
   if(flag==1){
    printf("%d found at index %d \n",element,i);
   }
   else{
    printf("element not found");
   }
 }

//  insertion at specific index 

void insertionAtIndex(int arr[]){
   printf("enter the position where you want to insert");
   scanf("%d",&position);
   printf("enter the element which you want to insert ");
   scanf("%d",&element);

   if(position>0 || position>=limit){
     printf("invalid choice");
   }

   for (i=limit;i>=position;i--){
    arr[i]=arr[i-1];
   }
   arr[position]=element;
   limit++;

   printf("resulted array : \n");
   for(i=0;i<limit;i++){
    printf("\n enter the arr[%d]  : %d \n",i,arr[i]);

   }
}


// deletion  at specific index

void deletionAtIndex(int arr[]){
   printf("enter the position where you want to delete the element  : ");
   scanf("%d",&position);

   if(position>0 || position>=limit){
     printf("invalid choice");
   }

   for (i=limit;i>=position;i--){
    arr[i]=arr[i-1];
   }

   limit--;

   printf("resulted array : \n");
   for(i=0;i<limit;i++){
    printf("\n enter the arr[%d]  : %d \n",i,arr[i]);

   }

}




