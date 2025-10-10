#include <stdio.h>
#include <stdlib.h>

// Create node structure
typedef struct node{
    int data;
    struct node *next;
}node;

// Create structure variables
node b={39,NULL};
node a={29,&b};

node *head=&(a);

// Declaration of function
void addToListBegning();
void displayList(node *head);

int main(){
    addToListBegning();
    displayList(head);
    
    return 0;
}

void addToListBegning(){
    // Create memory for node
    node *temp=(node *) malloc(sizeof(node));
    
    // Check if memory assigned
    if(temp==NULL){
        exit(1);
    }
    
    // Enter data to newly created node
    printf("Enter data for the node:");
    scanf("%d", &(temp->data));
    
    // Set node pointer to next for newly created node
    temp->next=NULL;
    
    if(head==NULL){
        head=temp;
    } else{
        temp->next=head;
        head=temp;
        temp=NULL;
    }
}

void displayList(node *head){
    if(head==NULL){
        printf("List is empty");
    } else{
        while(head!=NULL){
            printf("%d\n",head->data);
            head=head->next;
        }
    }
}
