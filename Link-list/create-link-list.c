// Online C compiler to run C program online
#include <stdio.h>
#include <stdlib.h>

// Declare node structure
struct node {
    int data;
    struct node *next;
};

typedef struct node node;

// Create header pointer and initialize it with NULL
node *header=NULL;

// Declare the nodeGenerator function
void createNode();

int main() {
    int i,n;
    
    printf("Enter the desired number of nodes:");
    scanf("%d",&n);
    
    for(i=0;i<n;i++){
        createNode();
    }

    return 0;
}

// Define createNode function
void createNode(){
    // Create a memory space for the node
    node *temp=(node *) malloc(sizeof(node));
    
    // Check if the memory assigned or not
    if(temp == NULL){
        exit(1);
    } else {
        printf("Enter the data:");
        scanf("%d",&temp->data);
        temp->next=NULL;
    }
    
    // Check if the link-list is empty
    if(header == NULL){
        header=temp;
    } else {
        node *p = header;
        
        while(p->next != NULL){
            p=p->next;
        }
        
        p=NULL;
    }
}
