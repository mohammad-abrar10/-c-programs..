#include <stdio.h>
int main()
{
    int num,i=2,flag=0;

    printf("enter a number : \n");
    scanf("%d",&num);

    while(num>i)
    {
        if (num%2==0){
            flag=1;
            break;
        }
        i++;
    }
    if (flag){
        printf("%d is not prime",num);
    }
    else{
        printf("%d is prime",num);
    }
}