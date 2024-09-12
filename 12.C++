//12.Middle of a Linked List//
class Solution {
  public:
    /* Should return data of middle node. If linked list is empty, then -1 */
    int getMiddle(Node* head) {
        Node* ptr=head;
        Node* qtr=head;
        
        while(qtr!=NULL && qtr->next!=NULL){
            ptr=ptr->next;
            qtr=qtr->next->next;
        }
        return ptr->data;
    }
};