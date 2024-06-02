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
    printf("Enter data: ");
    scanf("%d", &fresh->data);
    fresh->link = NULL;
    return fresh;
}

void createqueue() {
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
        createqueue(); //recursion
    }
}


// function to delete element in a queue

void deque(){
  que* temp = start;

    if(start==NULL){
      printf("queue is empty .....");
    }
    else {
        start = start->link;
        free(temp);
        return;
    }
}


// function to print queue linked list;
void printLinkedList()
{
    que *ptr;
    for (ptr = start; ptr != NULL; ptr = ptr->link)
    {
        printf("%d \n", ptr->data);
    }
}

int main() {

  MENU:

// clearing terminal
system("clear");

printf("\n ******************************************************************* \n");
printf("\n *******************       MENU     ******************************** \n");
printf("\n *******************************************************************\n");
printf("press 1 to insert into the queue \n");
printf("press 2 to  a delete element in the queue\n");
printf("press 3 to  a print the queue\n");

scanf("%d",&ch);
switch (ch)
{
case 1:
  createqueue();
  break;

case 2:
  deque();
  break;
case 3:
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
    system("exit");
  }


    // createqueue();
    // printLinkedList();

    // deque();

    // printLinkedList();
    // return 0;
}