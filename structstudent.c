// printf("%d %d %s",ptr->rollno, ptr->marks,ptr->name);
// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
// struct student
// {
//     int rollno,marks,i;
//     char name[16];

// };
// int main(){
//     struct student *ptr;
//     ptr=(struct student*)malloc(5*sizeof(struct student));
//     printf("enter name of 5 students");
//     for(i=0;i<5;i++)
//     {
//         scanf("%d %d %s",ptr(rollno));
//     }
    
    
// }
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct student
{
    int rollno, marks;
    char name[16];
};

int main()
{
    int i;
    struct student *ptr;
    ptr = (struct student*)malloc(5 * sizeof(struct student));
    printf("Enter the details of 5 students:\n");
    
    for(i = 0; i < 5; i++)
    {
        printf("Student %d:\n", i + 1);
        printf("Roll No: ");
        scanf("%d", &(ptr+i)->rollno);
        printf("Marks: ");
        scanf("%d", &(ptr+i)->marks);
        printf("Name: ");
        scanf("%s", &(ptr+i)->name);
    }
    printf("\n \n \n");
    printf("Student Details:\n \n \n");
    for(i = 0; i < 5; i++)
    {
        printf("Student %d:\n", i + 1);
        printf("Roll No: %d\n", (ptr+i)->rollno);
        printf("Marks: %d\n", (ptr+i)->marks);
        printf("Name: %s\n", (ptr+i)->name);
    }

    
    free(ptr);

    return 0;
}