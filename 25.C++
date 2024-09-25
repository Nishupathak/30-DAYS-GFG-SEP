//25.Palindrome Linked List//
int length(Node *&head){
    Node * temp = head;
    int count =0;
    while(temp!=NULL){
        count++;
        temp = temp-> next;
        
    }
    return count;
}
class Solution {
  public:
    // Function to check whether the list is palindrome.
    bool isPalindrome(Node *head) {
        
       stack<int> st;
       Node * temp = head;
       int len = length(head);
       for(int i=0;i<len ;i++){
           st.push(temp->data);
           temp = temp-> next;
       }
       temp = head;
       for(int i=0;i<len;i++){
           if(st.top()!=temp->data){
              return false;
           }
            st.pop();
            temp= temp-> next;
              
       }
       return true;
    }
};
