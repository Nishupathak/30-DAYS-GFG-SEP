//5.Missing in Array//
class Solution {
  public:

    // Note that the size of the array is n-1
    int missingNumber(int n, vector<int>& arr) {

        // Your code goes here
         int sum  = (n*(n+1))/2;
        int sumOfArr = 0;
        for(int nums:arr){
            sumOfArr+=nums;
        }
        return sum-sumOfArr;
    }
};