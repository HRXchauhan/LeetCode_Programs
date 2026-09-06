#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct ListNode {
       int val;
       struct ListNode *next;
    };


/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
int getDecimalValue(struct ListNode* head) {
    struct ListNode *temp = head;
    int sum=0,count=0;
    while(temp!=NULL){
        temp=temp->next;
        count++;
    }
    temp=head;
    for(int i=count-1;i>-1;i--){
        sum=sum+temp->val*pow(2,i);
        temp=temp->next;
    }
    return sum;
  
}

int main(){
    int size,value;
    printf("Enter the size of binary nums:\n");
    scanf("%d",&size);
    
    struct ListNode *head = NULL;
    struct ListNode *tem = NULL;
    struct ListNode *newnode;
    
    for(int i=0;i<size;i++){
        newnode =malloc(sizeof(struct ListNode));
        scanf("%d",&value);
        newnode->val=value;
        newnode->next=NULL;

        if(head==NULL){
            head=newnode;
            tem=head;

        }
        else{
            tem->next=newnode;
            tem=tem->next;
        }
    }
    int result=0;
    result=getDecimalValue(head);

    printf("The result is:->%d",result);


    return 0;


    
}