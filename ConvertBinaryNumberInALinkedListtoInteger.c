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