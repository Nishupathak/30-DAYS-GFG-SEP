//30.More Two BST//
class Solution {
    Node*prev;
    void dll(Node*root,Node*&head)
    {
        if(root==NULL)
        return;
        
        dll(root->left,head);
        if(prev==NULL)
        {
            prev=root;
            head=root;
        }
        else
        {
            prev->right=root;
            root->left=prev;
            prev=root;
        }
        dll(root->right,head);
    }
  public:
    
    vector<int> merge(Node *root1, Node *root2) 
    {
        vector<int>ans;
        prev=NULL;
        Node*t1;
        dll(root1,t1);
        prev=NULL;
        Node*t2;
        dll(root2,t2);
        while(t1!=NULL&&t2!=NULL)
        {
            if(t1->data<t2->data)
            {
                ans.push_back(t1->data);
                t1=t1->right;
            }
            else
            {
                ans.push_back(t2->data);
                t2=t2->right;
            }
        }
        while(t1!=NULL)
        {
            ans.push_back(t1->data);
            t1=t1->right;
        }
        while(t2!=NULL)
        {
            ans.push_back(t2->data);
            t2=t2->right;
        }
        return ans;
    }
};