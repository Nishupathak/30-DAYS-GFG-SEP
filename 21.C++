//21.Clone a linked list with next and random pointer//
class Solution {
  public:
    Node *copyList(Node *head) {
        // Write your code here
        Node *temp=head;
        Node *copy=new Node(0);
        Node *point=copy;
        while(temp!=NULL){
            point->next=new Node(temp->data);
            temp=temp->next;
            point=point->next;
        }
        temp=head;
        point=copy->next;
        while (point != NULL) {
            if (temp->random != NULL) {
                
                Node *randomPoint = copy->next;
                while (randomPoint != nullptr) {
                    if (randomPoint->data == temp->random->data) {
                        point->random = randomPoint;
                        break;
                    }
                    randomPoint = randomPoint->next;
                }
            }
                point=point->next;
                temp=temp->next;
        
        }
        return copy->next;
    }
};