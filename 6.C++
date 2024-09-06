//6.Kadane's Algorithm//
class Solution {  
  public:
    // Function to find the sum of contiguous subarray with maximum sum.
    long long maxSubarraySum(vector<int> &arr) {
        // code here...
        long long max = LLONG_MIN;
        long long end =0;
        for(int i=0;i<arr.size();i++)
        {
            end += arr[i];
            
            if(max < end )
            {
                max = end;
            }
            if(end < 0)
            {
                end =0;
            }
        }
        return max;
        
    }
};