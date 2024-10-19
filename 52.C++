class Solution {
  public:
    string roundToNearest(string str) {
        // Complete the function...
        int n = str.length();
        if(str[n-1] == '0')
          return str;
        // 331 991 1001 101
        if(str[n-1] <= '5')
          {
            str[n-1] = '0';
            return str;
          }
        //  999 996 99 97
        //  66
        int c=1;
        str[n-1] = '0';
        for(int i=n-2;i>=0;i--){
            if(c==1){
                int x = str[i] - '0';
                x += c;
                c=0;
                if(x > 9)
                  {
                      x %= 10;
                      c=1;
                  }
                str[i] = x + '0';
                // cout<<str[i]<<" ";
            }
            else
              c=0;
        }
        if(c==1)
          str = '1' + str;
        return str;
    }
};