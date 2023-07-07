class Solution{
  public:
    //Function to check whether the list is palindrome.
    Node* rev(Node* head){
        Node* prev=NULL;
        Node* curr=head;
        while(curr!=NULL){
            Node* temp=curr->next;
            curr->next=prev;
            prev=curr;
            curr=temp;
        }
        return prev;
    }
    bool isPalindrome(Node *head)
    {
       Node* slow=head;
       Node* fast=head;
       //finding the mid pointer
       while(fast->next!=NULL && fast->next->next!=NULL)
       {
           slow=slow->next;
           fast=fast->next->next;
       }
       //reverseing the ll
       slow->next=rev(slow->next);
        slow=slow->next;
        Node* temp=head;
        while(slow!=NULL)
       {
           if(slow->data!=temp->data){
               return false;
           }
           slow=slow->next;
           temp=temp->next;
       }
       
       return true;
       
    }
};
