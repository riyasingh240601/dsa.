class Solution {
public:
    ListNode* reverseBetween(ListNode* head, int left, int right) 
    {
        if(head==NULL || left==right){
            return head;
        }
      ListNode* dummy=new ListNode(0);
        dummy->next=head;
      ListNode* curr=head;
      ListNode* leftprev=dummy;
      int cnt=left-1;
        //first
        while(cnt--){
            leftprev=curr;
            curr=curr->next;
        }
        // curr is pointing to left and leftprev node before left
        
        //second--reverse left to right;
        ListNode* prev=NULL;
        for(int i=0;i<right-left+1;i++)
        {
            ListNode* temp=curr->next;
            curr->next=prev;
            prev=curr;
            curr=temp;
        }
        //3 update

        leftprev->next->next=curr;
        leftprev->next=prev;
     
        return dummy->next;
    }
};
