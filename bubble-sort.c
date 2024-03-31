#include <stdio.h>
int main(int argc, char const *argv[])
{
  int size,arr[size],i,j,flag=0,temp;
  printf("enter size of an array \n");
  scanf("%d",&size);

  printf("enter the elements of an array  :\n");
  for(i=0;i<size;i++){
    printf("enter element at arr[%d]  :",i);
    scanf("%d",&arr[i]);
  }

  for(i=0;i<size-1;i++)
    for(j=0;j<size-i-1;j++){
      if(arr[j]>arr[j+1]){
        temp=arr[j];
        arr[j]=arr[j+1];
        arr[j+1]=temp;
        flag=1;
      }
    }

    if(flag!=1){
      printf(" \n the array is already sorted \n");
    }
    else{
      printf(" \nsorted array in assending order  ; \n");
      for(i = 0; i < size; i++) {
        printf("\n enter the arr[%d]  : %d \n", i, arr[i]);
    }
    }
  return 0;
}
