//16.Longest valid Parentheses//
class Solution {
  public:
    int maxLength(string& str) {
        // code here
        int n = str.length();
        
        int open = 0;
        int close = 0;
        
        int maxi = 0;
        
        for(int i = 0;i<n;i++){
            if(str[i]=='('){
                open++;
            }
            else{
                close++;
            }
            
            if(open==close){
                maxi = max(maxi,open+close);
            }
            else if(close>open){
                open = 0;
                close = 0;
            }
        }
        open = 0;
        close = 0;
        for(int i = n - 1;i>=0;i--){
            if(str[i]=='('){
                open++;
            }
            else{
                close++;
            }
            
            if(open==close){
                maxi = max(maxi,open+close);
            }
            else if(open>close){
                open = 0;
                close = 0;
            }
        }
        
        return maxi;
    }
};