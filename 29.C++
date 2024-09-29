//29.Total count//
class Solution {
  public:
    int totalCount(int k, vector<int>& arr) {
        // code here
        int count = 0;
        for(int e : arr)
        {
            if(e % k != 0)
            count += e/k + 1;
            else
            count += e/k;
        }
        
        return count;
    }
};