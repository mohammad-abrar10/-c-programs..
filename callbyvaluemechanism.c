// #include <stdio.h>
// void swap(int a,int b);
// int main()
// {
//     int a=10 ,b=20;
//     swap(a,b);
//     printf("within main \n");
//     printf("a=%d b=%d",a,b);
// }

// void swap(int a ,int b){
//     int t=a;
//     a=b;
//     b=t;
//     printf("within swap \n");
//     printf("a=%d b=%d \n",a,b);
// }

// call by refrence mechanism

#include <stdio.h>
void swap (int *a ,int *b);
int main()
{
    int a=10,b=20;
    swap(&a ,& b);
    printf("within main");
    printf("a=%d b=%d",a,b);

}
void swap(int *a ,int *b){
    int t=*a;
    *a=*b;
    *b=t;
    printf("within swap");
    printf("a=%db=%d",*a,*b);
}
