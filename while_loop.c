// sum of x numbers 

// #include <stdio.h>
// int main()
// {
//    int sum=0,i=0,x,n;
//    printf("enter a number as x");
//    scanf("%d",&x);

//    while(i<x)
//    {
//     printf("enter a number as n");
//     scanf("%d",&n);
//     sum=sum+n;
//     i++;
//    }
//    printf("the sum of %d numbers is %d",x,sum);
// }

// multiplication of n numbers 

#include <stdio.h>
int main()
{
    int mul=1,i=1,x,n;
    scanf("%d",&n);
    while(i<n)
    {
        scanf("%d",&x);
        mul=mul*x;
        i++;

    }
    printf("the multiple  is %d",mul);
}