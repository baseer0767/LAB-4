#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node* next;
};
struct Node* createNode(int data){
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    if (newNode == NULL){
        printf("Memory Allocation Failed\n");
    }
    newNode->data = data;
    newNode->next = NULL;
};
struct Node* merge_list(struct Node*head1,struct Node*head2){
    struct Node*head3=NULL;
    struct Node*current1=head1;
    struct Node*current2=head2;

    while(current1!=NULL &&current2!=NULL){
        struct Node* newNode=createNode(0);
        if(current1->data<current2->data){
            newNode->data=current1->data;
            current1=current1->next;

        }else if(current1->data>current2->data){
            newNode->data=current2->data;
            current2=current2->next;


        }else if(current1->data==current2->data){
            newNode->data=current1->data;
            current1=current1->next;
            current2=current2->next;
            }

        if(head3==NULL){
            head3=newNode;
        }
        else{
            struct Node*current3=head3;
            while(current3->next!=NULL){
                current3=current3->next;
            }
            current3->next=newNode;

        }
    }


    while(current1!=NULL){
        struct Node*newNode=createNode(current1->data);
        current1=current1->next;
        if(head3==NULL){
                    head3=newNode;

    }else{
        struct Node*current3=head3;
        while(current3->next!=NULL){
            current3=current3->next;
        }
        current3->next=newNode;
    }
    }
    while(current2!=NULL){
        struct Node*newNode=createNode(current2->data);
        current2=current2->next;
        if(head3==NULL){
                    head3=newNode;

    }else{
        struct Node*current3=head3;
        while(current3->next!=NULL){
            current3=current3->next;
        }
        current3->next=newNode;
    }

}
return head3;
    }

int main(){
    struct Node *head;

}
