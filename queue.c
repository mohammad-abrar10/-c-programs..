#include <stdio.h>
#include <stdlib.h>
#define MAX 5

// global varibales 

int front=-1,last=-1,ch,element;
int queue[MAX];

// function to insert at queue 

void insertAtQueue(){
  if(last==MAX-1){
    printf(" overflow in queue");
    return;
  }
  else{

     printf("enter element in a queue at  :    %d   ",last+1);
     scanf("%d",&element);

      queue[++last] = element;
      if (front == -1){
         front = 0;
      }
  }
}


// function to delete in the queue


void deleteElementinQueue(){
  if(front==last){
    printf("queue is empty ");
    return;
  }
  else{
    printf("element  %d  removed successfully in the queue",queue[front++]);
    if(front==last){
      front=last=-1;
    }
  }
}

// function to print in the queue 

void printQueue(){
  printf("your queue ");

  for(int i=front;i<=last;i++){
    printf("%d \n",queue[i]);
  }


}


// main function 

int main(int argc, char const *argv[])
{

MENU:

// clearing terminal
system("clear");

// MENU

printf("\n ******************************************************************* \n");
printf("\n *******************       MENU     ******************************** \n");
printf("\n *******************************************************************\n");
printf("press 1 to insert into the queue \n");
printf("press 2 to  a delete element in the queue \n");
printf("press 3 to  a print the queue \n");

scanf("%d",&ch);
switch (ch)
{
case 1:
  insertAtQueue();
  break;
case 2:
 deleteElementinQueue();
  break;
case 3:
  printQueue();
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
