#include <stdio.h>
#include<stdlib.h>
#define MAX 5

// global variables
int top=-1;
int stack[MAX];
int ch;

// function of checking where stake is full or not


int fullStack(){
  // if(top >= MAX ){
  //   return 1;
  // }
  // else{
  //   return 0;
  // }
  return top >=MAX ;
}

// function to check where stack is empty or not


int emptyStack(){
  // if(top==-1){
  //   return 1;
  // }
  // else{
  //   return 0;
  // }
  return top == -1;
}

// function to create STACK
void createStack(){
  start :
  //  ++top;
   if (fullStack()) {
        printf("Stack overflow. Cannot add more elements.\n");
    }else{
       ++top;
      printf("enter element in a stack at %d   ------>   ", top);
      scanf("%d",&stack[top]);
    }

  printf("press 1 to continue or any other key to stop ");
  scanf("%d",&ch);
  // if(ch==1){
  //   goto start;
  // }
  switch (ch)
  {
  case 1:
    goto start;
    break;

  default:
    break;
  }
}

// function to push element in the stack in the STACK
void insertAtStack(){
  if(fullStack()){
    printf("Stack overflow. Cannot add more elements.\n");
  }
  else{
    ++top;
    printf("enter the element you want to insert at %d :  ",top);
    scanf("%d",&stack[top]);
  }
}

// function to peak stack 
void peakStack(){
  printf("the last element in the stack is %d ----> ",stack[top]);
}

// function to pop element in the stack

void deleteStack(){
  if(emptyStack()){
    printf("the stack is underflow,can't delete any element in the stack");
  }
  else{
    --top;
  }
}

void printStack(){
 if(emptyStack()){
  printf("empty stack.......");
 }else{
  printf("Stack: \n");
    for (int i = 0; i <= top; i++) {
        printf("%d ", stack[i]);
    }
    printf("\n");
 }
}



int main(int argc, char const *argv[])
{

MENU:

// clearing terminal 
system("clear");

printf("\n ******************************************************************* \n");
printf("\n *******************       MENU     ******************************** \n");
printf("\n *******************************************************************\n");
printf("press 1 to create a stack \n");
printf("press 2 to insert into the stack \n");
printf("press 3 to  a peak the stack \n");
printf("press 4 to  a delete element in the stack \n");
printf("press 5 to  a print the stack \n");

scanf("%d",&ch);
switch (ch)
{
case 1:
  createStack();
  break;
case 2:
  insertAtStack();
  break;
case 3:
  peakStack();
  break;
case 4:
  deleteStack();
  break;
case 5:
  printStack();
  break;

default:
  break;
}

  printf(" \n enter 1 to continue :  ");
  scanf("%d",&ch);

  if(ch ==1){
    goto  MENU;
  }
  else{
    // exits the program
    system("exit");
  }

}
