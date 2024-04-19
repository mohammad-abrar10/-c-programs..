// #include <stdio.h>
// int main()
// {
//  int num;
//  printf("enter a number");
//  scanf("%d",&num);
//  if (num==1)
//  printf("MONDAY");
//  else if (num==2)
//  printf("TUESDAY");
//  else if (num==3)
//  printf("WEDNESDAY");
//  else if (num==4)
//  printf("THRUSDAY");
//  else if (num==5)
//  printf("FRIDAY");
//  else if (num==6)
//  printf("SATURDAY");
//  else if (num==7)
//  printf("SUNDAY");
//  else 
// printf("wrong input");
// }
// #include <stdio.h>
// int main(){
//     int grade;
//     printf("enter a grade");
//     scanf("%d",&grade);

//     switch(grade)
//     {
//         case 100:
//         case 99:
//         case 98:
//         case 97:
//         case 96:
//         case 95:
//         case 94:
//         case 93:
//         case 92:
//         case 91:
//         case 90:

//           printf("a grade");
//           break;
        
//         case 89:
//         case 88:
//         case 87:
//         case 86:
//         case 85:
//         case 84:
//         case 83:
//         case 82:
//         case 81:
//         case 80:
//         case 79:
//           printf(" b grade");
//           break;

//         case 78:
//         case 77:
//         case 76:
//         case 75:
//         case 74:
//         case 73:
//         case 72:
//         case 71:
//         case 70:
//           printf("c grade");
//           break;

//         case 69:
//         case 68:
//         case 67:
//         case 66:
//         case 65:
//         case 64:
//         case 63:
//         case 62:
//         case 61:
//         case 60:
//           printf("d grade");
//           break;

//         default:
//            printf("fail");


//     }

// }

// #include <stdio.h>
// int main()
// {
//     int x,i=2,flag=0;
//     printf("enter a number as x:\n");
//     scanf("%d",&x);

//     while (x>i)
//     {
//       if (x%2==0)
//       {
//          flag=1;
//          break;
//       }
//       i++;
//     }
//     if (flag){
//       printf("%d x is not prime number",x );

//     }
//     else{
//       printf("%dx is prime number",x);
//     }
// }

// #include <stdio.h>
// int main()
// {
//   int i=4,j;
//   while(i>=1)
//   {
//     for(j=4;j<=i;j--){
//       printf("%d \n",j);
//       i--;
//     }
//   }
// }

// #include <stdio.h>

// int main() {
//    int i, j;
//    for (i = 4; i >= 1; i--)
//    {
    
//       for (j = 1; j <= i; j++) {
//          printf("%d ", j);
//       }
//       printf("\n");
      
//    }

//    return 0;
// // }
// #include <stdio.h>
// int main()
// {
//     int i,j,x[2][3];
//     for (i=0;i<2;i++){
//         for(j=0;j<3;j++)
//         scanf("%d",&x[i][j]);
//     }
// }
// #include <stdio.h>
// int main()
// {
//     int marks[4];

//     printf("enter the marks of student 1 ;");
//     scanf("%d",&marks[0]);
//     printf("enter the marks of student 2 ;");
//     scanf("%d",&marks[1]);
//     printf("enter the marks of student 3 ;");
//     scanf("%d",&marks[2]);
//     printf("enter the marks of student 4 ;");
//     scanf("%d",&marks[3]);

//     printf("you have entered %d %d %d and %d",marks[0],marks[1],marks[2],marks[3]);
    
// }

// #include <stdio.h>
// int main()
// {
//     int marks[4],i;
//     for(i=0;i<4;i++){
//         printf("enter the marks of students");
//         scanf("%d",&marks[i]);
        
//     }
//      printf("You have entered the following marks: ");
//     for (i = 0; i < 4; i++) {
//         printf("%d ", marks[i]);
//     }

// }
// #include <stdio.h>
// int main()
// {
//     int arr[5],i,sum=0;
//     printf("enter elements of an array ");
//     for (i = 0; i < 4; i++){
//     scanf("%d",(arr+i));
//     sum += *(arr+i);
//     }
//     printf("sum=%d",sum);

// }
// #include <stdio.h>
// int main()
// {
//     int arr[5][5],i,j;
//     printf("enter elements of an array");
//     for(i=0;i<5;i++)
//     {
//         for(j=0;j<5;j++)
//         scanf("%d",&arr[i][j]);
//     }
//     for(i=0;i<5;i++){
//         for(j=0;j<5;j++)
//         printf("%d \t95",arr[i][j]);
//     }
//     printf("\n");

    
   
// #include <stdio.h>
// int main()
// {
//     int arr[5],i,big=0;
//     printf("enter elements of n array");
//     for (i=0;i<5;i++)
//     scanf("%d",&arr[i]);
//      i=0;
//     while(i<5){
//         if(arr[i]>big){
//         big=arr[i];
//         }
//     }
//     printf("%d",big);

// }

// practice for merge sort array

#include <stdio.h>
void merge(int arr[],int first,int mid,int last);
void mergeSort(int arr[],int first,int last){
    if (first<last){
        int mid =(first+last)/2;
        mergeSort(arr,first,mid);
        mergeSort(arr,mid+1,last);
        merge(arr,first,mid,last);
    }
}

void merge(int arr[],int first,int mid,int last){

    int i,j,k;
    int size1=mid-first+1;
    int size2=last-mid;

    int leftArray[size1],rightArray[size2];

    for(i=0;i<size1;i++){
        leftArray[i]=arr[first+i];

    }
    for(j=0;j<size2;j++){
        rightArray[j]=arr[mid+1+j];

    }

    i=0;
    j=0;
    k=first; //initializing first element of merged array

    while (i<size1 && j<size2){
        if(leftArray[i]<=rightArray[j]){
            arr[k]=leftArray[i];
            i++;
        }
        else{
           arr[k]=rightArray[j];
            j++ ;
        }
        k++;
    }
    while(i<size1){
        arr[k]=leftArray[i];
        i++;
        k++;
    }
    while(j<size2){
        arr[k]=rightArray[j];
        j++;
        k++;
    }
}

int main(){
    int arr[]={21,66,23,90,32,789,21,56,89,32,76,43,56,21};
    int size=sizeof(arr)/sizeof(arr[0]);

    printf("\n before sort \n");
    for(int i=0;i<size;i++){
        printf(" \n %d \n",arr[i]);
    }
    mergeSort(arr,0,size-1);
    printf("\n after sort \n");
    for(int i=0;i<size;i++){
        printf(" \n %d \n",arr[i]);
    }
}

