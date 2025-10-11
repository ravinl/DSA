#include<stdio.h>
#include<stdlib.h>

// Declare a structure
typedef struct node{
    int data;
    struct node *next;
}node;

// Declare and initialize structure variable
node f={99,NULL};
node e={89,&(f)};
node d={79,&(e)};
node c={49,&(d)};
node b={39,&(c)};
node a={29,&(b)};
node *head=&(a);

// Declaration of function
void insertNodeAtPosition();
void printList(node *head);

// Declaration of inserted flag
int inserted=1;

int main(){
    insertNodeAtPosition();
    if(inserted){
        printList(head);
    };
    
    return 0;
}

void insertNodeAtPosition(){
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
        int position,i;
        node *p=head;
        node *q=head;
        
        printf("Enter your desired position to insert node at:\n");
        scanf("%d",&(position));
        
        printf("Position entered is: %d\n", position);
        
        // Check if position is out of range
        node *checkVar=head;
        int count=1;
        
        while(checkVar!=NULL){
            count++;
            checkVar=checkVar->next;
        };
        
        if(count < position || position < 1){
            printf("Invalid position\n");
            inserted=0;
            
            return;
        };
        
        for(i=1;i<position;i++){
            p=p->next;
        };
        
        temp->next=p;
        
        if(position>1){
            for(i=1;i<(position-1);i++)
            {
                q=q->next;
            };
            
            q->next=temp;
        }else{
            if(position==1){
                head=temp;
            }
        }
    };
}

void printList(node *head){
    node *p=head;
    while(p!=NULL){
        printf("Data is: %d\n",p->data);
        p=p->next;
    }
}
