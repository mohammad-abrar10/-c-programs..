#include <stdio.h>
// prototype
void merge(int arr[],int first,int mid,int last);

void mergeSort(int arr[],int first,int last){
  if(first<last){
    int mid=(first+last)/2;
    mergeSort(arr,first,mid);
    mergeSort(arr,mid+1,last);
    merge(arr,first,mid,last);

  }
}

void merge(int arr[], int first, int mid, int last) {
    int i, j, k;
    int size1 = mid - first + 1;
    int size2 = last - mid;

    // declaring 2 temporary sub arrays
    int arrayLeft[size1], arrayRight[size2];

    // copying array elements in sub arrays
    for (i = 0; i < size1; i++) {
        arrayLeft[i] = arr[first + i];
    }
    for (j = 0; j < size2; j++) {
        arrayRight[j] = arr[mid + 1 + j];
    }

    // inital index of left sub-array
    i = 0;
    // inital index of right sub-array
    j = 0;
    // initial index of merged array
    k = first;

    while (i < size1 && j < size2) {
        if (arrayLeft[i] <= arrayRight[j]) {
            arr[k] = arrayLeft[i];
            i++;
        } else {
            arr[k] = arrayRight[j];
            j++;
        }
        k++;
    }

    // Copy remaining elements of arrayLeft[] if any
    while (i < size1) {
        arr[k] = arrayLeft[i];
        i++;
        k++;
    }
    // Copy remaining elements of arrayRight[] if any
    while (j < size2) {
        arr[k] = arrayRight[j];
        j++;
        k++;
    }
}


int main(){
  int arr[]={23,21,67,98,21,34,25,12,0,3};
  int size=sizeof(arr)/sizeof(arr[0]);

  printf("\nbefore sorting \n");
  for(int i=0;i<size;i++){
    printf("%d \n",arr[i]);
  }
  mergeSort(arr,0,size-1);

  printf("\n after sorting\n");
  for(int i=0;i<size;i++){
    printf("%d \n",arr[i]);
  }

}
