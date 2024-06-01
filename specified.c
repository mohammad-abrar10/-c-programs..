#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node *link;
} SLL;

SLL *start = NULL;
int nodeCount = 0;

SLL *getnode()
{
    SLL *fresh;
    fresh = (SLL *)malloc(sizeof(SLL));

    if (!fresh)
    {
        printf("\n Malloc Failed \n");
        exit(1);
    }
    nodeCount++;

    printf("\n Enter data : ");
    scanf("%d", &fresh->data);

    fresh->link = NULL;
    return fresh; // returns address of newly created node
}

void createLinkedList()
{
    SLL *ptr;
    char ch;

    if (start == NULL)
    {
        start = getnode();
    }
    else
    {
        for (ptr = start; ptr->link != NULL; ptr = ptr->link)
             ptr->link = getnode(); // when Null
    }

    printf("\n Press Y to continue : ");
    fflush(stdin);
    scanf("%c", &ch);

    if (ch == 'y' || ch == 'Y')
    {
        createLinkedList(); // goes back to function and creates another node
    }
}

void printLinkedList()
{
    SLL *ptr;
    // for(ptr=start ; ptr->link != NULL;ptr=ptr->link)
    for (ptr = start; ptr != NULL; ptr = ptr->link)
    {
        printf("%d \n", ptr->data);
    }
}

void insertNodeAtPosition(int position)
{

    if (position>nodeCount + 1||position<1)
    {
        printf("position out of range");
    }
    else
    {
        SLL * newnode = getnode();
        if (position == 1)
        {
            newnode->link = start;
            start = newnode;
            return;
        }
        SLL *prev = start;
        SLL *forward = start;
        int count;

        for (count = 1; count < position; count++)
        {
            prev = forward;
            forward = forward->link;
        }
        prev->link = newnode;
        newnode->link = forward;
    }

    // if(position==1){
    //     newnode->link = start;
    //     start = newnode;
    //     return;
    // }
    // SLL * prev=start;
    // SLL * forward=start;
    // int count;

    // for(count=1;count <position;count++){
    //     prev =forward;
    //     forward=forward->link;

    // }
    // prev->link = newnode;
    // newnode->link = forward;
}

  

// void insertNodeAtPosition(int position) {
//     SLL *newNode = getnode();
//     if(position == 1) {
//         newNode->link = start;
//         start = newNode;
//         return;
//     }

//     SLL *ptr = start;
//     int count = 1;
//     while(ptr != NULL && count < position - 1) {
//         ptr = ptr->link;
//         count++;
//     }

//     if(ptr == NULL) {
//         printf("Position out of range\n");
//         return;
//     }

//     newNode->link = ptr->link;
//     ptr->link = newNode;
// }

void deleteNodeAtPosition(int position) {
    if (start == NULL) {
        printf("List is empty\n");
        return;
    }

    if (position < 1 || position > nodeCount) {
        printf("Position out of range\n");
        return;
    }

    SLL* temp = start;

    //delete at begining 
    if (position == 1) {
        start = start->link;
        free(temp);
        return;
    }

    //delete at a specified position
    SLL* prev = NULL;
    for (int count = 1; count < position; count++) {
        prev = temp;
        temp = temp->link;
    }
    
    if (prev != NULL) {
        prev->link = temp->link;
    }
    free(temp);
}
int main()
{
    createLinkedList();
    printf("\ninitial linked list \n ");
    printLinkedList();

    int positiontoinsert;
    printf("\nEnter position to insert new node   :    ");
    scanf("%d", &positiontoinsert);

    insertNodeAtPosition(positiontoinsert);

   

    printf("\nUpdated Linked List after insertion:\n");
    printLinkedList();


   int DeleteAtposition;
    printf("\nenter position where  you want to delete:\n");
    scanf("%d",&DeleteAtposition);
    deleteNodeAtPosition(DeleteAtposition);

    printf("\nUpdated Linked List after deletion:\n");
    printLinkedList();

   

    return 0;
}