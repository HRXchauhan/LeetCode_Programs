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
struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {
    int temp=0, rim=0;
    struct ListNode *head=NULL;
    struct ListNode *rem=NULL;
    struct ListNode *newNode;    
    while(l1!=NULL||l2!=NULL){
        temp=l1->val+l2->val+rim;
        newNode = malloc(sizeof(struct ListNode));
        newNode->val=temp%10;
        newNode->next=NULL;
        if(head==NULL){
            head=newNode;
            rem=head;
        }else{
             rem->next=newNode;
             rem=newNode;
        }

        temp=temp/10;
        rim=temp;
       
        if(l1->next==NULL&&l2->next!=NULL){
            l1->val=0;
        }else{
            l1=l1->next;
        }

         if(l2->next==NULL&&l1!=NULL){
            l2->val=0;
        }else{
            l2=l2->next;
        }
        
        
    }
    if(rim!=0){
        newNode =malloc(sizeof(struct ListNode));

        rem->next=newNode;
        newNode->val=rim;
        newNode->next=NULL;

    }

    return head;
}