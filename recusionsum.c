// #include <stdio.h>

// int sumOfDigits(int number) {
//     if (number == 0) {
//         return 0;  // Base case: if the number is 0, return 0
//     } else {
//         return (number % 10) + sumOfDigits(number / 10);  // Recursive call
//     }
// }

// int main() {
//     int number;
//     printf("Enter a positive integer: ");
//     scanf("%d", &number);
    
//     int result = sumOfDigits(number);
//     printf("Sum of digits: %d\n", result);
    
//     return 0;
// }
// #include <stdio.h>
// int sum(int num)
// {
//     if(num==0){
//         return 0;
//     }
    
//     else{
//         return (num%10)+sum(num/10);
//     }
// }

// int main()
// {
//     int num;
//     printf("enter a number");
//     scanf("%d",&num);

//     int result =sum(num);
//     printf("the sum of digits=%d",result);
//     return 0;

// }


// call by value
#include <stdio.h>

void changeValue(int num) {
    num = 10; // Modifying the parameter
}

int main() {
    int number = 5;
    printf("Before function call: %d\n", number);

    changeValue(number); // Function call by value

    printf("After function call: %d\n", number); // Value remains unchanged
    return 0;
}
