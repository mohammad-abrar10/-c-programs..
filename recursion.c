// factorial using recursion

#include <stdio.h>
int fact(int n);
int main()
{
    int n,f;
    printf("enter a number");
    scanf("%d",&n);
    f=fact(n);
    printf("factorial=%d",f);
}
int fact(int n){
    if(n==1){
        return 1;
    }
    else{
        return(n*fact(n-1));
    }
        
    
}