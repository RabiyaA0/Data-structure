#include<stdio.h>
#include<stdlib.h>
struct node
{
int data;
struct node*next;
};
struct node * head, * tail=NULL;
void insert(int data)
{
struct node * newnode =(struct node *) malloc(sizeof(newnode));
newnode->data=data;
newnode->next=NULL;
if(head==NULL)
{
head=newnode;
tail=newnode;
}
else{
tail->next=newnode;
tail=tail->next;
}
return;
}
void display()
{
struct node *current=head;
if(head==NULL){
printf("empty list\n");
return;
}

printf("nodes of single linked list: \n");
while(current!=NULL)
{
printf("%d\n",current->data);
current=current->next;
}
printf("\n");
}
int main()
{
insert(12);
insert(213);
insert(43);
insert(454);
display();


return 0;
}
