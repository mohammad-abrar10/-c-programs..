// #include <stdio.h>
// int main()
// {
//     int flag=0;
//     int arr[8]={11,22,33,44,55,66,77,88};
//     int start=0,mid,end=7,x;
//     printf("enter no.to be searched");
//     scanf("%d",&x);
//     while(start<=end)
//     {
//         mid=(start+end)/2;
//         if (arr [mid]==x)
//         {
//             printf("elements found at index %d",mid);
//             flag=1;
//             break;

//         }
//         else if(arr[mid]>x){
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


// using recursion

#include <stdio.h>
int bsearch(int a[],int start,int end,int x);
int x;
int main(){
    int a[]={11,22,33,44,55,66,77,};
    int i;
    scanf("%d",&x);
    i=bsearch(a,0,6,x);
    if(i==-1)
        printf("element not found");
    else
        printf("element found at index %d",i);
}

int bsearch(int a[], int start, int end, int x) {
    int mid;

    if (start > end)
        return -1;

    mid = (start + end) / 2;

    if (a[mid] == x)
        return mid;
    else if (a[mid] > x)
        return bsearch(a, start, mid - 1, x);
    else
        return bsearch(a, mid + 1, end, x);
}