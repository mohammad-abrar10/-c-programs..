// #include <stdio.h>
// int main(){
//     int x,y,z;
//     printf("enter x,y,z");
//     scanf("%d %d %d",&x,&y,&z);
//     if(x>y && x>z){
//         printf("%d=x is greater",x);
//     }
//     else if(y>x && y>z){
//         printf("%d=y is greater",y);
//     }
//     else{
//         printf("%d=z is greater",z);
//     }
// }

#include <stdio.h>
 int main(){
    int x,y,z;
    printf("enter x,y,z");
    scanf("%d %d %d",&x,&y,&z);
    if(x>y){
        if(x>z){
            printf("%d=x is greater",x);
        }
    }
    else if(y>z){
        if(y>x){
            printf("%d=y is greater",y);
        }
    }
    else{
        printf("%d=z is greater",z);
    }
}