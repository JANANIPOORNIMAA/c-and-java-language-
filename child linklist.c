#include<stdio.h>
#include<stdlib.h>

struct node *createlist();
struct node *flatten();
//void display();
struct node
{
    int data;
    struct node*next;
    struct node*prev;
    struct node*child;
};
struct node*head,*tail,*child,*newnode,*temp;
int main()
{
    int arr1[]={1,2,3,4,5,6,};
    int arr2[]={7,8,9,10};
    int arr3[]={11,12};
    int size1=sizeof(arr1)/sizeof(arr1[0]);
    int size2=sizeof(arr2)/sizeof(arr2[0]);
    int size3=sizeof(arr3)/sizeof(arr3[0]);
    struct node *head1 = createlist(arr1,size1);
    struct node *head2 = createlist(arr2,size2);
    struct node *head3 = createlist(arr3,size3);
    head1->next->next->child = head2;
    head2->next->child = head3;
    flat_list(head1);
    display(head1);

}
struct node *createlist(int arr[], int size)
{
    int i;
    head=NULL;
    child=NULL;
    tail =NULL;
    for(i=0; i<size; i++)
    {
        newnode = (struct node*)malloc(sizeof(struct node));
        newnode->data=arr[i];
        newnode->next= NULL;
        newnode->prev=NULL;
        newnode->child=NULL;
        if(head==NULL)
        {
            head=newnode;
            temp=newnode;
            tail=newnode;
        }
        else
        {
            temp->next=newnode;
            temp->prev=temp;
            temp=newnode;
            tail=newnode;
        }
    }
    return head;
}
struct node *flatten(struct node *head)
{
    struct node *curr = head;
    struct node *tail = head;
    while (curr != NULL)
    {
        struct node *child_node = curr->child;
        struct node *next_node = curr->next;
        if (child_node != NULL)
        {
            tail = flat_list(child_node);
            curr->next = child_node;
            child_node->prev = curr;
            tail->next = next_node;
            if (next_node)
                next_node->prev = tail;
            curr = tail;
        }
        else
        {
            curr = curr->next;
            if (curr)
                tail = curr;
        }
    }
    return tail;
}
void display(struct node*head)
{
    struct node *temp = head;
    while(temp!=NULL)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }
}
