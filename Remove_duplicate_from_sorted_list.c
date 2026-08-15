/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* deleteDuplicates(struct ListNode* head) {
    struct ListNode *temp=NULL,*lol=NULL,*new=NULL;
    temp=head;
    new=head;
    if(head==NULL){
        return head;
    }
    temp=temp->next;
    while(temp!=NULL){
        if(new->val==temp->val){
            lol=temp;
            temp=temp->next;
            new->next=lol->next;
            free(lol);
        }
        else{
            temp=temp->next;
            new=new->next;
        }
    }
    return head;
}
