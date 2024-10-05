
class Solution {
  public:
    long long findSmallest(vector<int> &arr) {
        // Your code goes here.
        long long ans = 1;
        for(int x : arr) {
            if(ans < x)
                return ans;
            ans += x;
        }
        return ans;
    }
};
