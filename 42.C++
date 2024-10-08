class Solution {
  public:
    int pairsum(vector<int> &arr) {
        // code here
        int currmax=INT_MIN;
        int max=INT_MIN;
        for(int i=0;i<arr.size();i++){
            if(arr[i]>max){
                currmax=max;
                max=arr[i];
            }
            else{
             if(arr[i]>=currmax){
                    currmax=arr[i];
                }
            }
        }
        return max+currmax;
    }
};