//19.Reverse Words//
class Solution {
  public:
    // Function to reverse words in a given string.
    string reverseWords(string s) {
        // code here
        string ans="";
         int i=s.size()-1;
         while(i>=0){
             if(s[i]=='.'){
                 ans+=s[i];
                    i--;
             }
             else{
                 int j=i;
                 while(j>=0 && s[j]!='.')j--;
                 string x=s.substr(j+1,i-j);
                 ans+=x;
                 i=j;
             }
         }
         return ans;
    }
};