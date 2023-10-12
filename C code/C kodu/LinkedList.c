#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *head = NULL;
struct node *tail = NULL;

void add_node(int);
void remove_firstnode();
void printlist();
int nodenumber();
int rec_nodenumber(struct node *);
int rec_numberonodes();
int search_node_rec(struct node *, int);
int search(int);

void add_node(int data)
{
    struct node *newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data=data;
    newnode->next=NULL;
    if (head == NULL)
    {
        head = newnode;
        tail = newnode;  
    }
    else
    {
        tail->next=newnode;
        tail=newnode;     
    }
}

void remove_firstnode()
{
    if (head == NULL)
    {
        printf("The list is empty");
        return;
    }
    struct node *toremove = head;
    head=head->next;
    free(toremove);
}

void printlist()
{
    struct node *temp=head;

    printf("The nodes in the list are: ");

    while(temp!=NULL)
    {
        printf(" %d", temp->data);
        temp=temp->next;
    }

    printf("\n");
}

int nodenumber()
{
    struct node *temp=head;
    int nodes=0;

    while(temp!=NULL)
    {
        nodes+=1;
        temp=temp->next;
    }

    return nodes;   
}

int rec_nodenumber(struct node *Node)
{
    if (Node==NULL)
    {
        return 0;
    }
    else 
    {
        return 1 + rec_nodenumber(Node->next);
    }
}

int rec_numberonodes()
{
    return rec_nodenumber(head);
}

int search_node_rec(struct node *tmp, int data_needed)
{
    if (tmp==NULL)
    {
        return 0;
    }

    if (tmp->data==data_needed)
    {
        return 1;
    }

    return search_node_rec(tmp->next, data_needed);
}

int search(int data_needed)
{
    return search_node_rec(head, data_needed);
}

int main() 
{
    add_node(15);
    add_node(22);
    add_node(35);
    printlist();

    printf("The number of nodes is: %d \n", nodenumber());
    
    printf("Is there a 15 in the list?: %d \n", search(15));
    printf("Is there a 40 in the list?: %d \n", search(40));

    return 0;
}