#include <stdio.h>
// convertcelsius.c
// To convert temperatures in degrees Celsius
//  to Fahrenheit, multiply by 1.8 (or 9/5) and add 32.
int main(){
    int f;
    printf("what is the value of fahrenheight \n");
    scanf("%d",&f);
    printf("convert celcius%d",(f-32)*5/9);
    return 0;
}