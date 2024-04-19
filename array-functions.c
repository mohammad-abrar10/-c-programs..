#include <stdio.h>
#include <stdlib.h>

#define MAX 100

// prototypes
void insertOp(int arr[]);
void displayOp(int arr[]); 
void linearsearch(int arr[]);
void insertionAtIndex(int arr[]);
void deletionAtIndex(int arr[]);
void largestElement(int arr[]);
void smallestElement(int arr[]);
void binarySearch(int arr[], int limit);
void bubbleSort(int arr[]);
void selectionSort(int arr[]);

// global variables
int limit,i,element,position,flag=0,loc;

int main(int argc, char const *argv[]) {
    int arr[MAX];
    int ch;

    printf("enter the size of an array ");
    scanf("%d", &limit);

    START:
    system("clear");

    printf("\n ******************************************************************* \n");
    printf("\n *******************       MENU     ******************************** \n");
    printf("\n *******************************************************************\n");
    printf("\npress 1 for insertion \npress 2 for displaying\npress 3 for searching\npress 4 for insertion at specific index\npress 5 for deletion at specific index\npress 6 for finding largest number in an array\npress 7 for finding smallest number in an array\npress 8 for binary search\npress 9 for bubble sorting an array\npress 10 for selection sorting an array\npress 11 to exit\n");

    scanf("%d", &ch);
    switch(ch) {
        case 1:
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
        case 8:
            printf("*********** binary search *************\n");
            binarySearch(arr, limit);
            break;
        case 9:
            printf("*********** bubble sorting of array *************\n");
            bubbleSort(arr);
            break;
        case 10:
            printf("*********** selection sorting of array *************\n");
            selectionSort(arr);
            break;
        case 11:
            exit(0); // Exit the program
            break;
        default:
            printf("Invalid choice\n");
    }

    printf("enter 1 to continue :    \n");
    scanf("%d",&ch);

    if(ch == 1) {
        goto START;
    } else {
        exit(0);
    }

    return 0;
}

void insertOp(int arr[]) {
    for(i = 0; i < limit; i++) {
        printf("\n enter the arr[%d]  :  ", i);
        scanf("%d", &arr[i]);
    }
}

void displayOp(int arr[]) {
    for(i = 0; i < limit; i++) {
        printf("\n enter the arr[%d]  : %d \n", i, arr[i]);
    }
}

void linearsearch(int arr[]) {
    displayOp(arr);
    printf("enter the element which you are looking for ");
    scanf("%d", &element);
    for(i = 0; i < limit; i++) {
        if(element == arr[i]) {
            flag = 1;
            loc = i;
            break;
        }
    }
    if(flag == 1) {
        printf("%d found at index arr[%d] \n", element, loc);
    } else {
        printf("element not found");
    }
}

void insertionAtIndex(int arr[]) {
    printf("enter the position where you want to insert");
    scanf("%d", &position);

    if(position > 0 && position <= limit) {
        printf("enter the element which you want to insert ");
        scanf("%d", &element);

        for (i = limit; i >= position; i--) {
            arr[i] = arr[i - 1];
        }
        arr[position] = element;
        limit++;
        printf("resulted array : \n");
        displayOp(arr);
    } else {
        printf("invalid choice \n");
    }
}

void deletionAtIndex(int arr[]) {
    printf("enter the position where you want to delete");
    scanf("%d", &position);

    if(position > 0 && position < limit) {
        for (i = position; i < limit - 1; i++) {
            arr[i] = arr[i + 1];
        }
        limit--;
        printf("resulted array : \n");
        displayOp(arr);
    } else {
        printf("invalid choice \n");
    }
}

void largestElement(int arr[]) {
    displayOp(arr);
    int big = arr[0];
    for(i = 1; i < limit; i++) {
        if(big < arr[i]) {
            big = arr[i];
            loc = i;
        }
    }
    printf("\nlargest number in an array is %d found at index arr[%d] \n", big, loc);
}

void smallestElement(int arr[]) {
    displayOp(arr);
    int small = arr[0];
    for(i = 1; i < limit; i++) {
        if(small > arr[i]) {
            small = arr[i];
            loc = i;
        }
    }
    printf("\nsmallest number in an array is %d found at index arr[%d] \n", small, loc);
}

void binarySearch(int arr[], int limit) {
    int first = 0, last = limit - 1, mid,element;

    printf("enter the element which you are looking for ");
    scanf("%d", &element);

    while (first <= last) {
        mid = first + (last - first) / 2;

        if (arr[mid] == element) {
            printf("Element found at index %d\n", mid);
            return;
        }

        if (arr[mid] > element) {
            last = mid - 1;
        } else {
            first = mid + 1;
        }
    }

    printf("Element not present in the array\n");
}


// bubble sort in assending order


void bubbleSort(int ar[]) {
  int temp, j;
  for (i = 0; i < limit - 1; i++) {
    for (j = 0; j < limit - 1 - i; j++)
      if (ar[j] > ar[j + 1]) {
        temp = ar[j];
        ar[j] = ar[j + 1];
        ar[j + 1] = temp;
      }
  }
  printf("\nSorted Array: ");
  displayOp(ar);
}


// Selecion sorting


void selectionSort(int arr[])
{
   int  j,temp , midIndex;

   for(i=0 ; i<limit-1 ; i++)
   {
      midIndex = i ;

      for(j=i+1 ; j<limit ; j++)
      {
         if(arr[j]<arr[midIndex])
         {
            midIndex = j ;
         }
      }

   if(midIndex != 1)
    {
      temp = arr[i];
      arr[i] = arr[midIndex];
      arr[midIndex]=temp;
    }
   }
  displayOp(arr);

}




