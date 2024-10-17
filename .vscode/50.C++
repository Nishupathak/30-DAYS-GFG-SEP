class Solution {
  public:
    // Function to split a linked list into two lists alternately
    vector<Node*> alternatingSplitList(struct Node* head) {
        // Your code here
        
        vector<Node*> ans;
        
        if(!head->next)
        {
            ans.push_back(head);
            return ans;
        }
        
        Node *head1 = head;
        Node *head2 = head->next;
        Node *tail1 = head1;
        Node* tail2 = head2;
        
        while(1)
        {
            if(tail2->next)
            {
                tail1->next = tail2->next;
                tail1 = tail1->next;
            }
            else break;
            if(tail1->next)
            {
                tail2->next = tail1->next;
                tail2 = tail2->next;
            }
            else break;
        }
        tail1->next = NULL;
        tail2->next = NULL;
        ans.push_back(head1);
        ans.push_back(head2);
        return ans;
        
    }
};