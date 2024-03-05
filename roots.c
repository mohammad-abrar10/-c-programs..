// #include <stdio.h>
// int main(){
//     int a,b,c;
//     // int d =b*b-4*a*c;
//     // float quadratic_equation=-b+d*d/2*a;
//     printf("enter a \n");
//     scanf("%d",&a);
//     printf("enter b \n");
//      scanf("%d",&b);
//     printf("enter c \n");
//      scanf("%d",&c);
//     //  int d =b*b-4*a*c;
//     // int d =b*b-4*a*c;
//     float quadratic_equation=-b+(1/2*b*b-4*a*c)/2*a;
//     //  int d =b*b-4*a*c;
//      printf("the roots of quadratic equation are=%f",quadratic_equation);
//     return 0;
// }
// #include <stdio.h>
// #include <math.h>

// int main() {
//     double a, b, c, discriminant, realPart, imaginaryPart, root1, root2;

//     printf("Enter coefficients a, b, and c: ");
//     scanf("%lf %lf %lf", &a, &b, &c);

//     discriminant = b * b - 4 * a * c;

//     if (discriminant > 0) {
//         root1 = (-b + sqrt(discriminant)) / (2 * a);
//         root2 = (-b - sqrt(discriminant)) / (2 * a);
//         printf("The roots are %.2lf and %.2lf\n", root1, root2);
//     } else if (discriminant == 0) {
//         root1 = root2 = -b / (2 * a);
//         printf("The roots are equal and they are %.2lf\n", root1);
//     } else {
//         realPart = -b / (2 * a);
//         imaginaryPart = sqrt(-discriminant) / (2 * a);
//         printf("The roots are complex and they are %.2lf + %.2lfi and %.2lf - %.2lfi\n",
//                 realPart, imaginaryPart, realPart, imaginaryPart);
//     }

//     return 0;
// }

#include <stdio.h>
int main (){
    int x,y,z;
    printf("enter a number x:");
    scanf("%d",&x);
    printf("enter a number y:");
    scanf("%d",&y);
    printf("enter a number z:");
    scanf("%d",&z);

    if(x>y){
        if(x>z){
             printf("x is greater ");
        }
    }
    if(y>z){
        printf("y is greater");
    }
    else{
        printf("z is greater");
    }
    return 0;
}