// area and circumfernece of circle




// #include <stdio.h>
// int main(){
//     float radius,pie=3.14;
    
//     printf("what is the radius of circle :\n");
//     scanf("%f",&radius);
//     float area_of_circle=pie*radius*2*2;
//     printf("the area of circle=%f \n",area_of_circle);

//     float circumference_of_circle=2*pie*radius;
//     printf("circumference_of_circle=%f",circumference_of_circle);
// }






// biggest of three




// #include <stdio.h>
// int main(){
//     int A,B,C;
//     printf("enter number A, B and C: \n");
//     scanf("%d %d %d",&A,&B,&C);

//     if(A>B){
//         if(A>C){
//             printf("A is greater and A=%d",A);
//         }
//     }
//     else if(B>A){
//         if(B>C){
//             printf("B is greater and B=%d",B);
//         }
//     }
//     else{
//         printf("C is greater and C=%d",C);
//     }
// }



 // prime or not



// #include <stdio.h>
// int main()
// {
//     int num,i;
//     printf("enter a number ");
//     scanf("%d",&num);

//     for(i=2; i<num;i++){
//         if(num%i==0){
//             printf("num=%d is a prime number",num);
//             break;
//         }
//          else{
//             printf("num=%d is not a prime number",num);
//             break;
//         }
       
//     }
   
// }

// #include <stdio.h>
// int main()
// {
//     int num,remainder,sum=0,original_number;
//     printf("enter a number ");
//     scanf("%d",&num);
//     original_number=num;

//     while(num!=0){
//         remainder=num%10;
//         sum+=remainder;
//         num/=10;

//     }
//      printf("sum=%d",sum);
   
//     int reverse=0;
//     while(original_number!=0){
//         remainder=original_number%10;
//         reverse=reverse*10+remainder;
//         original_number/=10;
//     }
//     printf("reverse=%d",reverse);

//     if(reverse==num)
//         printf("the number is palindrome"); 
//     else
//         printf("the number is not palindrome");

    
    
// }
#include <stdio.h>

int main() {
    int num, remainder, sum = 0, original_number;
    printf("Enter a number: ");
    scanf("%d", &num);
    original_number = num;

    while (num != 0) {
        remainder = num % 10;
        sum += remainder;
        num /= 10;
    }

    printf("Sum = %d\n", sum);

    int reverse = 0;
    while (original_number != 0) {
        remainder = original_number % 10;
        reverse = reverse * 10 + remainder;
        original_number /= 10;
    }

    printf("Reverse = %d\n", reverse);

    if (reverse == num)
        printf("The number is a palindrome.\n");
    else
        printf("The number is not a palindrome.\n");

    return 0;
}








