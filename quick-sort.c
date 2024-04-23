#include <stdio.h>

void swap(int* a, int* b) {
    int t = *a;
    *a = *b;
    *b = t;
}

int quick(int arr[], int first, int last) {
    int pivot = arr[last];
    int i = first - 1;

    for (int j = first; j <= last - 1; j++) {
        if (arr[j] < pivot) {
            i++;
            swap(&arr[i],&arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[last]);
    return (i + 1);
}

void quickSort(int arr[],int first,int last){
  if(first<last){
    int pi=quick(arr,first,last);
    quickSort(arr,first,pi-1);
    quickSort(arr,pi+1,last);

  }
}


int main() {
    int arr[] = {10, 7, 8, 9, 1, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    quickSort(arr, 0, n - 1);
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}
