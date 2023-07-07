
class Solution {
public:
    ListNode* oddEvenList(ListNode* head)
    {
        if(head==NULL ||  head->next==NULL){
            return head;
        }
        ListNode* odd=head;
        ListNode* even=head->next;
        ListNode* curr=even;
        while(even!=NULL && even->next!=NULL){
             odd->next=odd->next->next;
            even->next=even->next->next;
              odd=odd->next;
            even=even->next;
          
        }
        odd->next=curr;
        return head;
    }
};
