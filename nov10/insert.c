#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node*next;
};
struct node *head=NULL,*tail=NULL;

void create(){
    struct node *newnode=(struct node*)
    malloc(sizeof(struct node));
    int value;
    printf("Enter the data:");
    scanf("%d",&value);
    newnode->data=value;
    newnode->next=NULL;
    if(head==NULL){
        head=tail=newnode;
    }
    else{
        tail->next=newnode;
        tail=newnode;
    }
}
void insertbeg()
{
struct node *newnode=(struct node*)
malloc(sizeof(struct node));
int vl;
printf("Enter the data:");
scanf("%d",&vl);
newnode->data=vl;
newnode->next=NULL;
newnode->next=head;
head=newnode;
}
void insertend()
{
struct node *newcode(struct node*)malloc(sizeof(node))
int value;
scanf("%d",&n);
newnode->data=value;
newnode->next=newnode;
tail=newnode;
}
void delbeg()
{
    struct node *newcode(struct node*)malloc(sizeof(node))
    free(temp);
}
void delend()
{
    struct node *newcode(struct node*)malloc(sizeof(node))
    while(ptr->next->next1==NULL)
    {
        ptr=ptr->next;
    } tail=ptr;
    ptr=ptr->next;
    free(ptr);
    tail->next=NULL;
}
void display()
{
    
}
int main()

{
    
}