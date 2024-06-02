#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int data;
    struct node *link;
} que;

que *start = NULL;
int nodecount = 0;
int ch;

que* getNode() {
    que *fresh = (que*)malloc(sizeof(que));
    if (!fresh) {
        printf("malloc failed\n");
        exit(1);
    }
    nodecount++;
    printf("Enter data at  %d  : ",nodecount);
    scanf("%d", &fresh->data);
    fresh->link = NULL;
    return fresh;
}

void createstack() {
    que *ptr;
    char ch;

    if (start == NULL) {
        start = getNode();
    } else {
        ptr = start;
        while (ptr->link != NULL) {
            ptr = ptr->link;
        }
        ptr->link = getNode(); // when Null
    }

    printf("\nPress Y or y to continue: ");
    fflush(stdin);
    scanf("%c", &ch);

    if (ch == 'y' || ch == 'Y') {
        createstack(); //recursion
    }
}


// function to delete element in a queue

void push() {
    if (start == NULL) {
        printf("Queue is empty, cannot delete.\n");
        return;
    }

    que* temp = start;
    que* prev = NULL;
    int count;

    for (count = 1; count < nodecount; count++) {
        prev = temp;
        temp = temp->link;
    }

    if (prev == NULL) {
        // Only one element in the queue
        start = NULL;
    } else {
        prev->link = temp->link;
    }
    free(temp);
    nodecount--;
}



// function to print queue linked list;
void printLinkedList()
{
    que *ptr;
    for (ptr = start; ptr != NULL; ptr = ptr->link)
    {
        printf("%d ----> ", ptr->data);
    }
}

int main() {

  MENU:

// clearing terminal
system("clear");

printf("\n ******************************************************************* \n");
printf("\n *******************       MENU     ******************************** \n");
printf("\n *******************************************************************\n");
printf("press 1 to push element  into the stack \n");
printf("press 2 to  a pop element in the stack\n");
printf("press 3 to  a print the stack\n");

scanf("%d",&ch);
switch (ch)
{
case 1:
  createstack();
  break;

case 2:
  push();
  break;
case 3:
 printf("\n stack  : \n");
 printLinkedList();
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


    // createqueue();
    // printLinkedList();

    // deque();

    // printLinkedList();
    // return 0;
}
