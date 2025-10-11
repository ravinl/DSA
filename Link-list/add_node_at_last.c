#include<stdio.h>
#include<stdlib.h>

// Declare a structure
typedef struct node{
    int data;
    struct node *next;
}node;

// Declare and initialize structure variable
node c={49,NULL};
node b={39,&(c)};
node a={29,&(b)};
node *head=&(a);

// Declaration of function
void insertNodeAtEnd();
void printList(node *head);

int main(){
    insertNodeAtEnd();
    printList(head);
    
    return 0;
}

void insertNodeAtEnd(){
    // Create space in memory for node
    node *temp=(node *) malloc(sizeof(node));
    
    // Check if memory assigned
    if(temp==NULL){
        exit(1);
    }
    
    // Assign data value to newly created node
    printf("Enter data for new node:");
    scanf("%d",&(temp->data));
    
    // Assign NULL value to temp->next
    temp->next=NULL;
    
    if(head==NULL){
        head=temp;
    } else{
        node *p=head;
        node *storedNode; // TODO: Change name
        while(p!=NULL){
            storedNode=p;
            p=p->next;
        }
        storedNode->next=temp;
    }
}

void printList(node *head){
    node *p=head;
    while(p!=NULL){
        printf("Data is: %d\n",p->data);
        p=p->next;
    }
}
