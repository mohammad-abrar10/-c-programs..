#include <stdio.h>
#define MAX 100
#include <stdlib.h>

// prototypes
void insertOp(int arr[]);
void displayOp(int arr[]); 
void linearsearch(int arr[]);
void insertionAtIndex(int arr[]);
void deletionAtIndex(int arr[]);
void largestElement(int arr[]);
void smallestElement(int arr[]);


// ---------------global variables---------------------- 
int limit,i,element,position,flag=0,loc;
int main(int argc, char const *argv[])
{
  int arr[MAX];
  int ch;
  printf("enter the size of an array ");
  scanf("%d",&limit);


// used for clearing previous screen
 START:
 system("clear");

printf("\n ******************************************************************* \n");
printf("\n *******************       MENU     ******************************** \n");
printf("\n *******************************************************************\n");


  printf("\npress 1 for insertion \npress 2 for displaying\npress 3 for searching\npress 4 for insertion at specific index\npress 5 for deletion at specific index\npress 6 for finding largest number in an array\npress 7 for finding smallest number in an array\n");

// --------------------using switching case here --------------------------
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
    printf("*********** searching element in an array *************\n");
    linearsearch(arr);
    break;

    case 4:
    printf("*********** insertion at specific index *************\n");
    insertionAtIndex(arr);
    break;

    case 5:
    printf("*********** deletion  at specific index *************\n");
    deletionAtIndex(arr);
    break;

    case 6:
    printf("*********** finding largest number in an array  *************\n");
    largestElement(arr);

    break;

    case 7:
    printf("*********** finding smallest  number in an array  *************\n");
    smallestElement(arr);
    break;

    default:
    printf("invalid choice,try again \n");
    break;
  }

  // --------------------choosing options from user input --------------------------

  printf("enter 1 to continue :    \n");
  scanf("%d",&ch);

  if(ch ==1){
    goto  START;
  }
  else{
    // exits the program
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


  // searching of element in an array

 void linearsearch(int arr[]){
  displayOp(arr);
   printf("enter the element which you are looking for ");
   scanf("%d",&element);
   for(i=0;i<limit;i++){
    if(element==arr[i]){
      flag=1;
      loc=i;
      break;
    }
   }
   if(flag==1){
    printf("%d found at index arr[%d] \n",element,loc);
   }
   else{
    printf("element not found");
   }
 }

//  insertion at specific index

void insertionAtIndex(int arr[]){
   printf("enter the position where you want to insert");
   scanf("%d",&position);

   if(position>0 && position<=limit){
     printf("enter the element which you want to insert ");
     scanf("%d",&element);

    for (i=limit;i>=position;i--){
      arr[i]=arr[i-1];
    }
    arr[position]=element;
    limit++;
    printf("resulted array : \n");
    for(i=0;i<limit;i++)
    {
     printf("\n the arr[%d]  : %d \n",i,arr[i]);
    }
   }
   else{
     printf("invalid choice \n");
   }
}


// deletion  at specific index

void deletionAtIndex(int arr[]){
   printf("enter the position where you want to delete");
   scanf("%d",&position);

   if(position>0 && position<limit){
    for (i=position;i<limit-1;i++){
      arr[i]=arr[i+1];
    }
    limit--;
    printf("resulted array : \n");
    for(i=0;i<limit;i++)
    {
     printf("\nthe arr[%d]  : %d \n",i,arr[i]);
    }
   }
   else{
     printf("invalid choice \n");
   }

}

// finding largest number in an array
void largestElement(int arr[]){
   displayOp(arr);
   int big=arr[0];
   for(i=1;i<limit;i++){
    if(big<arr[i]){
      big=arr[i];
      loc=i;
    }
   }
    printf("\nlargest number in an array is %d found at index arr[%d] \n",big,loc);
}

// finding smallest number in an array

void smallestElement(int arr[]){
  displayOp(arr);
   int small=arr[0];
   for(i=1;i<limit;i++){
    if(small>arr[i]){
      small=arr[i];
      loc=i;
    }
   }
    printf("\nsmallest number in an array is %d found at index arr[%d] \n",small,loc);
}







