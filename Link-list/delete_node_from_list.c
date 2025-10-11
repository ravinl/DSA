#include <stdio.h>

// Declare the structure
typedef struct node{
    int data;
    struct node *next;
}node;

// Declare and initialize structure variables
node c={49,NULL};
node b={39,&(c)};
node a={29,&(b)};
node *head=&(a);

// Declare functions
void deleteNodeFromList();
void printList(node *head);

// input validation flag
int isValid=0;

int main(){
    deleteNodeFromList();
    if(isValid){
        printList(head);
    }
    return 0;
}

void deleteNodeFromList(){
    int position,i,count=0;
    node *temp=head,*prev=head,*p=head;
    
    // Check if list is empty
    if(head==NULL){
        printf("List is empty!!");
        return;
    }
    
    printf("Enter the position from which you want to remove node:");
    scanf("%d",&position);
    
    // Count the length of list
    while(p!=NULL){
        count++;
        p=p->next;
    }
    
    // Check the validation of position entered
    if(position>count||position<1){
        printf("You entered invalid position!!");
        return;
    }
    
    isValid=1;
    
    if(position==1){
        head=head->next;
    } else{
            for(i=1;i<position;i++){
            temp=temp->next;
        };
    };
    
    for(i=1;i<(position-1);i++){
        prev=prev->next;
    };
    
    prev->next=temp->next;
};

void printList(node *head){
    if(head==NULL){
        printf("List is empty!");
    }else{
        node *ptr=head;
        while(ptr!=NULL){
            printf("Data is: %d\n", ptr->data);
            ptr=ptr->next;
        };
    };
};
