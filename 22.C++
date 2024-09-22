//22.Longest Prefix Suffix//
class Solution {
  public:
    int lps(string str) {
       int i=0;
        int j=1;
        vector<int> kmp(str.length() , 0);
        while(j<str.length()){
            if(str[i] == str[j]){
                i++;
                kmp[j] = i;
                j++;
            }else{
                if(i==0){
                    j++;
                }else{
                    i = kmp[i-1];
                }
            }
        }
        return kmp[str.length()-1];
    }
};