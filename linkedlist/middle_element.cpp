Node* slow=head;
       Node* fast=head;
       while(fast!=NULL && fast->next!=NULL)
       {
           slow=slow->next;
           fast=fast->next->next;
       }
       cout<<slow->data<<"\n";
       return true;
       
