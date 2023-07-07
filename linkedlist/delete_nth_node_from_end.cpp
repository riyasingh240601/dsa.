int getNthFromLast(Node *head, int n)
    {
        Node* start=new Node(0);
        start->next=head;
          Node* slow=start;
          Node* fast=start;
          for(int i=1;i<=n;i++){
              fast=fast->next;
          }
          while(fast->next!=NULL){
              fast=fast->next;
              slow=slow->next;
          }
          slow->next=slow->next->next;
          return start->next;
    }
