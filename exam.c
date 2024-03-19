// #include <stdio.h>

// #define MAX_SIZE 100

// int main() {
//     int arr[MAX_SIZE];
//     int size;

//     printf("Enter the size of the array (up to %d): ", MAX_SIZE);
//     scanf("%d", &size);

//     if (size <= 0 || size > MAX_SIZE) {
//         printf("Invalid array size.\n");
//         // return 1;
//     }

//     printf("Enter %d integer values:\n", size);
//     for (int i = 0; i < size; i++) {
//         printf("Enter value %d: ", i + 1);
//         scanf("%d", &arr[i]);
//     }

//     printf("Contents of the array:\n");
//     for (int i = 0; i < size; i++) {
//         printf("%d ", arr[i]);
//     }
//     printf("\n");

//     return 0;
// }
// #include <stdio.h>
// int main()
// {
//   int arr[5],i,great=0,loc;
//   printf("enter elements of array");
//   for(i=0;i<5;i++){
//     scanf("%d",&arr[i]);
    
//   }
//   for(i=0;i<5;i++){
//     if (arr[i]>=great){
//       great=arr[i];
//       loc=i;
//     }
    
//   }
//    printf("the greatest number in an array is %d found at %d",great,loc);

// }
// #include <stdio.h>

// int main() {
//     int arr[5]={11,22,33,44,55}, i, j, temp, size = 5;

//     // printf("Enter elements of the array: ");
//     // for (i = 0; i < 5; i++) {
//     //     scanf("%d", &arr[i]);
//     // }

//     for (i = 0; i < size - 1; i++) {
//         for (j = 0; j < size - i - 1; j++) {
//             if (arr[j] > arr[j + 1]) {
//                 temp = arr[j];
//                 arr[j] = arr[j + 1];
//                 arr[j + 1] = temp;
//             }
//         }
//     }

//     printf("The greatest number in the array is %d\n", arr[size - 1]);

//     return 0;
// }

// #include <stdio.h>
// int main(){
//   int arr[8]={11,22,33,44,55,66,77,88};
//   int start=0,end=7,mid,x,flag;
//   printf("enter a number to be searched ");
//   scanf("%d",&x);

//   while(start<=end){
//     mid=(start+end)/2;
//     if (arr[mid]==x){
//       printf("element found at index %d",mid);
//       flag =1;
//       break;
//     }
//     if(arr[mid]>x){
//       end=mid-1;
//     }
//     else{
//       start=mid+1;
//     }

//   }
//   if(!flag){
//     printf("element not found");
//   }
// }
// #include <stdio.h>
// int main(){
//   int arr[5],sum=0;
//   printf("enter elements of an array \n");
//   for (int i=0;i<5;i++){
//     scanf("%d",(arr+i));
//     sum+=*(arr+i);
//   }
//   printf("sum=%d",sum);

// }
// #include <stdio.h>
// #include <stdlib.h>

// int main() {
//     int i, j, temp, n;
//     int *ptr;

//     printf("Enter the number of elements: ");
//     scanf("%d", &n);

//     ptr = (int*)malloc(n * sizeof(int));

//     if (ptr == NULL) {
//         printf("Memory allocation failed.\n");
//         return 1;
//     }

//     printf("Enter the elements of the array:\n");
//     for (i = 0; i < n; i++) {
//         scanf("%d", (ptr + i));
//     }

//     for (i = 0; i < n - 1; i++) {
//         for (j = 0; j < n - i - 1; j++) {
//             if (*(ptr + j) > *(ptr + j + 1)) {
               
//                 temp = *(ptr + j);
//                 *(ptr + j) = *(ptr + j + 1);
//                 *(ptr + j + 1) = temp;
//             }
//         }
//     }

//     printf("Sorted array in ascending order:\n");
//     for (i = 0; i < n; i++) {
//         printf("%d ", *(ptr + i));
//     }
    

   
// }

// #include <stdio.h>
// int main(){
//     int arr[8]={11,22,33,44,55,66,77,88};
//     int start=0,end=7,mid,flag=0,x;
//     printf("enter a number to be searched ");
//     scanf("%d",&x);

//     while(start<=end){
//         mid=(start+end)/2;
//         if(arr[mid]==x){
//             printf("element found at index %d",mid);
//             flag=1;
//             break;
//         }
//         if(arr[mid]>x){
//             end=mid-1;
//         }
//         else{
//             start=mid+1;
//         }
//     }
//     if(!flag){
//         printf("element not found");
//     }
// }
// #include <stdio.h>
// int main(){
//     int a=0,b=1,c=2,sum;
//     printf("fibonacci series \n:");
//     while(c<10){

//         sum=a+b;
//         printf("%d",sum);
//         a=b;
//         b=sum;
//         c++;

//     }

// }

// #include <stdio.h>
// int main(int argc, char const *argv[])
// {
    // int a=45;
    // int *ptr=&a;
    // printf("%p\n",&a);
    // printf("%p \n ",&*ptr);
    // printf("%p \n ",ptr);
    // printf("%p \n ",*&*ptr);
    // return 0;

//     int arr[]={1,7,3,4,5};
//     printf("value of arr[%d]=%d \n",0,arr[0]);
//     printf("value of arr[%d]=%d \n",1,arr[1]);
//     printf("value of arr[%d]=%d \n",0,*arr);
//     printf("value of arr[%d]=%d \n",1,*(arr+1));
//     printf("%d \n",*arr+1); //it adds the first element with 1 bt not give the value of 2 element 
// }

//  factorail of a number 
// #include <stdio.h>
// int main(int argc, char const *argv[])
// {
//     int n,i,fact=1;
//     printf("enter a number ");
//     scanf("%d",&n);
//     if(n==0&&n<0){
//         printf("factorial for 0 and negative integers does'nt exist \n");
//     }
//     else{
//         printf("the factorial of %d  :    ",n);
//         for(i=1;i<=n;i++){
//             fact*=i;
//         }
//         printf("%d \n",fact);
//     }


//     return 0;
// }

// fibonacci series 
#include <stdio.h>
int main(int argc, char const *argv[])
{
   int firstTerm=0;
   int secoudTerm=1;
   int terms;
   printf("enter the number of terms");
   scanf("%d",&terms);
//  using do while loop

// printf("using do while loop to print the fibonacci series of n number of terms \n");
// int i=0;
//   do{
//     printf("%d \t",firstTerm);
//     // printf("%d",secoudTerm);
//     int sum=firstTerm+secoudTerm;
//     firstTerm=secoudTerm;
//     secoudTerm=sum;
//     i++;
//   }while(i<terms);

//   using for loop
printf("using for loop to print the fibonacci series of n number of terms \n");

for (int i=0;i<terms;i++){
    printf("%d \t",firstTerm);
    int sum=firstTerm+secoudTerm;
    firstTerm=secoudTerm;
    secoudTerm=sum;

}

}



