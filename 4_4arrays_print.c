#include <stdio.h>
int main()
{
    int marks[5],i;
    for (i=0;i<5;i++)
    {
        printf("enter marks of a student %d :",i+1);
        scanf("%d",&marks[i]);

    }
    printf("{");
    for (i=0;i<5;i++){
        printf("%d , ",marks[i]);
    }
    printf("}");

}