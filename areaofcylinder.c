#include <stdio.h>
int main(){
   // surface area is 2π r h + 2π r². 
   float pie=3.14;
   int r,h;
   printf("what is the radius of cylinder \n");
   scanf("%d",&r);
    printf("what is the height of cylinder \n");
    scanf("%d",&h);
    float area_of_cylinder =(2*pie*r*h+2*pie*r*r);
    printf("area of cylinder =%f",area_of_cylinder);
    return 0;
}