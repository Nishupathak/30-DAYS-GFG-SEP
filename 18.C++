//18.Parenthesis Checker//

class Solution
{
    public:
    //Function to check if brackets are balanced or not.
    bool ispar(string x)
    {
        // Your code here
        
        stack<char> stk;
        
        for(char& p : x){
            if(p == '('){
                stk.push(')');
            }
            else if(p == '{'){
                stk.push('}');
            }
            else if(p == '['){
                stk.push(']');
            }
            else if(!stk.empty() && stk.top() == p){
                stk.pop();
            }
            else{
                return false;
            }
        }
        
        return (stk.empty() ? true : false);
    }

};