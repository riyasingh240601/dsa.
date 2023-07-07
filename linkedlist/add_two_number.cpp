class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2)
    {
      if(l1==NULL){
          return l2;
      }
        if(l2==NULL){
            return l1;
        }
        ListNode* head=new ListNode((l1->val+l2->val)%10);
        int cnt=(l1->val+l2->val)/10;
        l1=l1->next;
        l2=l2->next;
        ListNode* curr=head;
      while(l1!=NULL && l2!=NULL)
      {
          int x=(l1->val+l2->val+cnt)%10;
         // cout<<x<<"\n";
            curr->next=new ListNode(x);
            cnt=(l1->val+l2->val+cnt)/10;
            l1=l1->next;
            l2=l2->next; 
          curr=curr->next;
      }
        while(l1!=NULL){
            int x=(l1->val+cnt)%10;
            curr->next=new ListNode(x);
            cnt=(l1->val+cnt)/10;
            l1=l1->next; 
            curr=curr->next;
        }
        while(l2!=NULL){
            int x=(l2->val+cnt)%10;
             curr->next=new ListNode(x);
            cnt=(l2->val+cnt)/10;
            l2=l2->next;
            curr=curr->next;
        }
        while(cnt!=0){
            int x=(cnt)%10;
             curr->next=new ListNode(x);
            cnt/=10;
            curr=curr->next;
        }
        return head;
    }
};
