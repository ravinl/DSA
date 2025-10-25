#include<stdio.h>

// Declare an structure
typedef struct node{
    int data;
    struct node *next;
}node;

// Create and initialise node variables
node a={69,NULL};
node b={59,&a};
node c={49,&b};
node d={39,&c};
node e={129,&d};
node f={29,&e};
node g={19,&f};
node h={9,&g};

// Declare and initialize the head
node *head=&h;

// Declare user defined functions
int reverseList();
int printList(node *head);

// main function
int main(){
    printList(head);
    reverseList();
    printList(head);
};

// reverseList function definition
int reverseList(){
    node *prevNode=NULL;
    node *currentNode=head;
    node *temp;
    
    while(currentNode!=NULL){
        temp=currentNode->next;
        currentNode->next=prevNode;
        prevNode=currentNode;
        currentNode=temp;
    };
    
    head=prevNode;
    
    return 0;
}

// printfList function definition
int printList(node *head){
    if(head==NULL){
        printf("List is empty!!");
        return 0;
    } else{
        while(head!=NULL){
            printf("Data is: %d\n", head->data);
            head=head->next;
        };
    };
    
    return 0;
}
