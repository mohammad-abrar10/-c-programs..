// greatest of five

// #include <stdio.h>
// void great(int n);
// int main(){
//     int n;
//     printf("enter number of terms");
//     scanf("%d",&n);
//     great(n);
// }
// void great(int n)
// {
//    int i,x,large=0;
//    printf("enter elements");
//    for(i=0;i<n;i++){
//     scanf("%d",&x);
//     if(x>large)
//     {
//         large=x;

//     }

//    }
//    printf("%d is largest",large);
// }

//sum of two numbers using functions

// #include <stdio.h>

// int sum(int a, int b);

// int main() {
//     int x, y, s;
//     printf("Enter two numbers: ");
//     scanf("%d %d", &x, &y);
//     s = sum(x, y);
//     printf("Sum = %d", s);
//     return 0;
// }

// int sum(int a, int b) {
//     int s = a + b;
//     return s;
// }

// program to find average of certain terms

// #include <stdio.h>
// float average(int n);
// int main(){
//     float result;
//     int n;
//     printf("enter no.of terms");
//     scanf("%d",&n);
//     result=average(n);
//     printf("avearge=%f",result);
// }
// float average(int n)
// {
//     int x,i,sum=0;
//     float a;
//     for(i=0;i<n;i++){
//         printf("enter a no.");
//         scanf("%d",&x);
//         sum+=x;
//     }
//     a=(float)sum/x;
//     return a;
// }



// passing arrays to a function



// #include <stdio.h>
// void display(int arr[],int size );
// int main()
// {
//     int A[]={11,33,44,66,88};
//     display(A,5);
// }
// void display(int arr[],int size){
//     int i;
//     for(i=0;i<size;i++){
//         printf("%d \t",arr[i]);
//     }
// }



// display details of employees


// #include <stdio.h>
// void dispay(structemployee,e );


// #include <stdio.h>
// #include <string.h>
// #include <stdlib.h>

// struct employee 
// {
//     int id, salary;
//     char role[20];
// };

// void display(struct employee e); 

// int main()
// {
//     struct employee e1; 

//     e1.id = 101;
//     e1.salary = 70000;
//     strcpy(e1.role, "Engineer");

//     display(e1); 

   
// }

// void display(struct employee e) 
// {
//     printf("%d %d %s", e.id, e.salary, e.role);
// }





#include <stdio.h>
#include <string.h>
#include <stdlib.h>
// void display (struct employee e1);


struct employee
{
    int id;
    int salary;
    char role[20];
};

void display (struct employee e1);
int main()
{
    struct employee e1;

   
    e1.id = 101;
    e1.salary = 70000;
    strcpy(e1.role, "Engineer");

    
    display (e1);

}


void display(struct employee e1)
{
    printf("%d %d %s", e1.id, e1.salary, e1.role);
}



