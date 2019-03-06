#include<stdio.h>
#include<stdlib.h>
void viewlist();

struct node
{
    int data;
    struct node *next;
};
struct node *start=NULL;

struct node* newNode()
{
    struct node *ptr;
    ptr=(struct node*)malloc(sizeof(struct node));
    return ptr;
}

void insertNode()
{
    struct node *temp,*t;
    temp=newNode();
    temp->next=NULL;
    printf("Enter data: ");
    scanf("%d",&temp->data);
    if(start==NULL)
    start=temp;
    else
    {
        t=start;
        while(t->next!=NULL)
         t=t->next;
        t->next=temp;
    }
}

void deletefNode()
{
    struct node *t;
    int value;
    if(start==NULL)
        printf("\n\tList is empty.\n");
    else
    {
        t=start;
        start=start->next;
        value = t->data;
        free(t);
        printf("\n\t%d is deleted.",value);
    }
}

void deletelNode()
{
    struct node *current , *prev;
    int value;
    prev=start;
    if(prev==NULL||prev->next==NULL)
    {
        if(prev==NULL)
        printf("\n\tList is empty.\n");
        else
        deletefNode();
        return;
    }
    else
    {
        current=start->next;
        while(current->next!=NULL)
        {
            current=current->next;
            prev=prev->next;
        }
        value=current->data;
        prev->next=NULL;
        free(current);
        printf("\n\t%d is deleted.",value);
        return;
    }
}

void deleteAnyNode()
{
    int value;
    struct node *prev , *current;
    prev=start;
    if(prev==NULL)
    printf("\n\tList is empty.");
    else
    {
        viewlist();
        printf("\nEnter value to delete: ");
        scanf("%d",&value);
        if(prev->data==value)
        {
            deletefNode();
            return;
        }
        current=start->next;
        while(current->data!=value)
        {
            if(current->next==NULL && current->data!=value)
            {
                printf("\n\t%d is not found.",value);
                return;
            }
            else
            {
                current=current->next;
                prev=prev->next;
            }
        }
        prev->next=current->next;
        free(current);
        printf("\n\t%d is deleted.",value);
    }
    
}



void viewlist()
{
    struct node *ptr;
    if(start==NULL)
    printf("\n\tList is empty.\n");
    else
    {
        ptr=start;
        printf("\nList:-\t");
        while(ptr!=NULL)
        {
            printf("%d ",ptr->data);
            ptr=ptr->next;
        }
    }
}

int menu()
{
    int ch;
    printf("\nEnter:\n");
    printf("1.Insert node.\n");
    printf("2.Delete first node.\n");
    printf("3.Delete last node.\n");
    printf("4.Delete a particular node.\n");
    printf("5.View List.\n");
    printf("6.Exit.\n=> ");
    scanf("%d",&ch);
    system("clear");
    return ch;
}

int main()
{
    int ch=0;
    while(ch!=6)
    {
        ch=menu();
        switch(ch)
        {
            case 1:
            insertNode();
            break;
            case 2:
            deletefNode();
            break;
            case 3:
            deletelNode();
            break;
            case 4:
            deleteAnyNode();
            break;
            case 5:
            viewlist();
            break;
            case 6:
            exit(0);
            break;
            default:
            printf("\nEnter a valid choice.");
            break;
        }
    } 
    return 0;
}