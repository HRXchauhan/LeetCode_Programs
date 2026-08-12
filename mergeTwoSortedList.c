#include <stdio.h>

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode {
       int val;
       struct ListNode *next;
    };

int main(){
    /*struct ListNode {
       int val;
       struct ListNode *next;
    };*/


}

struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2) {
    struct ListNode *head, *in;
    
    if(list1==NULL&&list2==NULL){
        return list1;
    }
    else if(list1==NULL){
        return list2;
    }
    else if(list2==NULL){
        return list1;
    }
    if(list1->val<=list2->val){
        head=list1;
    }
    else{
        head=list2;
        list2=list1;
        list1=head;
    }
    in=list1;
    while(list1!=NULL&&list2!=NULL){
        if(list1->val<=list2->val){
            if(in!=list1){
                in=in->next;
            }
            
            list1=list1->next;
        }
        else{
            
            in->next=list2;
            list2=list2->next;
            in=in->next;
            in->next=list1;
            
             
        }
        
    }
    if(list1==NULL&&list2==NULL){
        return head;
    }
    else if(list1==NULL){
        in->next= list2;
    }
    else if(list2==NULL){
        in->next= list1;
    }
    
    return head;
    
    
}
    
    
