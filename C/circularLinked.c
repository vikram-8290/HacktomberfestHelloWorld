#include<stdio.h>
#include<stdlib.h>
struct Node{
 struct Node *prev;
 int data;
 struct Node *nxt;
};
struct Node *head;
void insertAtStart(){
    struct Node *temp;
    temp = malloc(sizeof(struct Node));
    if(temp == NULL){
        printf("\nOVerFlow");
    }
    else{
        int item;
        scanf("%d",&item);
        if(head == NULL){
            temp->prev = NULL;
            temp->data = item;
            temp->nxt = NULL;
            head = temp;
        }
        else{
            temp->prev = NULL;
            temp->data = item;
            temp->nxt = head;
            head->prev = temp;
            head = temp; 
        }
    }
}
void insertAtLast(){
    struct Node *ptr,*temp;
    int item;
    ptr = malloc(sizeof(struct Node));
    if(ptr == NULL){
        printf("\nOverFlow");
    }
    else{
        scanf("%d",&item);
        ptr->data = item;
        if(head ==NULL){
            ptr->nxt = NULL;
            ptr->prev= NULL;
        }
        else{
            temp = head;
            while(temp!=NULL){
                temp = temp->nxt;
            }
            temp->nxt = ptr;
            ptr->prev = temp;
            ptr->nxt = NULL;
        }
    }
}
void display(){
    struct Node *temp;
    temp = head;
    while(temp!=NULL){
        printf("%d ",temp->data);
        temp = temp->nxt;
    }
}

int main(){
    int n;
    
    while(1){
        scanf("%d",&n);
        switch (n)
        {
        case 1:
            insertAtStart();
            break;
        case 2:
            insertAtLast();
            break;
        case 3: 
            display();
            break;
        case 4:
            exit(0);
        default:
            break;
        }
    }
    
}