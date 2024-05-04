#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int data ;
    struct node *link;
}SLL;

SLL *start = NULL;

SLL *getnode()
{
    SLL *fresh;
    fresh = (SLL*)malloc(sizeof(SLL));

    if(!fresh)
    {
        printf("\n Malloc Failed \n");
        exit(1);
    }

    printf("\n Enter data : ");
    scanf("%d",&fresh->data);

    fresh->link = NULL;
    return fresh; //returns address of newly created node
}

void createLinkedList()
{
    SLL *ptr;
    char ch ;

    if(start==NULL)
    {
        start = getnode();
    }
    else
    {
        for(ptr=start ; ptr->link != NULL;ptr=ptr->link);

        ptr-> link = getnode(); //when Null
    }

    printf("\n Press Y to continue : ");
    fflush(stdin);
    scanf("%c",&ch);

    if(ch=='y' || ch=='Y')
    {
        createLinkedList();//goes back to function and creates another node
    }
}

void printLinkedList()
{
    SLL *ptr;
    // for(ptr=start ; ptr->link != NULL;ptr=ptr->link)
    for(ptr=start ; ptr != NULL;ptr=ptr->link)
    {
        printf("%d \n",ptr->data);
    }
}
void insertNodeAtPosition(int position) {
    SLL *newNode = getnode();
    if(position == 1) {
        newNode->link = start;
        start = newNode;
        return;
    }

    SLL *ptr = start;
    int count = 1;
    while(ptr != NULL && count < position - 1) {
        ptr = ptr->link;
        count++;
    }

    if(ptr == NULL) {
        printf("Position out of range\n");
        return;
    }

    newNode->link = ptr->link;
    ptr->link = newNode;
}
int main()
{
    createLinkedList();
    printf("initial linked list ");
    printLinkedList();

    int position;
    printf("Enter position to insert new node: ");
    scanf("%d", &position);

    insertNodeAtPosition(position);

    printf("Updated Linked List after insertion:\n");
    printLinkedList();

    return 0;
}