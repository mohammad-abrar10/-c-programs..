#include <stdio.h>
int main(){
    int marks;
    printf("enter marks:");
    scanf("%d",&marks);
    if (marks>50){
        printf("your student has qualified the entrance");
    }
    else {
        printf("you are not qualified for the entrance,better luck next time");
    }
    return 0;
}