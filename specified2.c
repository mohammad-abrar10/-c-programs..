#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
  int data;
  struct node *link;
} SLL;

SLL *start = NULL;

// this function creates the node of the linked list

SLL *getnode(int data)
{
  SLL *fresh = (SLL *)malloc(sizeof(SLL));
  if (fresh == NULL)
  {
    printf("Malloc failed\n");
    exit(1);
  }
  fresh->data = data;
  fresh->link = NULL;
  return fresh;
}


// this function creates the linked list
void createlinkedlist()
{
  int data;
  printf("Enter data: ");
  scanf("%d", &data);
  SLL *ptr;
  char ch;
  if (start == NULL)
  {
    start = getnode(data);
  }
  else
  {
    for (ptr = start; ptr->link != NULL; ptr = ptr->link)
      ;
    ptr->link = getnode(data);
  }
  printf("\n Press y or Y to continue:");
  fflush(stdin);
  scanf("%c", &ch);
  if (ch == 'y' || ch == 'Y')
    createlinkedlist();
}


// function to add at the begining of the linked list
void addbeg()
{
  int data;
  printf("Enter data to add at the beginning: ");
  scanf("%d", &data);
  SLL *fresh = getnode(data);
  fresh->link = start;
  start = fresh;
}


// function to add at the end of the linked list
void addend()
{
  int data;
  printf("Enter data to add at the end: ");
  scanf("%d", &data);
  SLL *fresh = getnode(data);
  if (start == NULL)
  {
    start = fresh;
    return;
  }
  SLL *lastNode = start;
  while (lastNode->link != NULL)
  {
    lastNode = lastNode->link;
  }
  lastNode->link = fresh;
}

//  function to add at specified position in the linked list

void addAtPosition(int data, int position)
{
  if (position <= 0)
  {
    printf("Invalid position\n");
    return;
  }
  if (position == 1)
  {
    addbeg();
    return;
  }
  SLL *newNode = getnode(data);
  SLL *current = start;
  SLL *previous = start;
  for (int count = 1; current != NULL && count < position; count++)
  {
    previous = current;
    current = current->link;
  }
  if (current == NULL)
  {
    printf("Invalid position\n");
    return;
  }
  previous->link = newNode;
  newNode->link = current;
}

// prints the linked list
void printList()
{
  SLL *current = start;
  while (current != NULL)
  {
    printf("%d ", current->data);
    current = current->link;
  }
  printf("\n");
}

// main function

int main()
{
  int choice;

  do
  {
    printf("\nEnter your choice:\n");
    printf("1. Create list\n");
    printf("2. Add at beginning\n");
    printf("3. Add at end\n");
    printf("4. Add at specified position\n");
    printf("5. Exit\n");

    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
      createlinkedlist();
      printList();
      break;
    case 2:
      addbeg();
      printList();
      break;
    case 3:
      addend();
      printList();
      break;
    case 4:
    {
      int data, position;
      printf("Enter data to add: ");
      scanf("%d", &data);
      printf("Enter position to add: ");
      scanf("%d", &position);
      addAtPosition(data, position);
      printList();
    }
    break;
    case 5:
      printf("Exiting...\n");
      break;
    default:
      printf("Invalid choice. Choose again.\n");
      break;
    }
  } while (choice != 6);

  return 0;
}
