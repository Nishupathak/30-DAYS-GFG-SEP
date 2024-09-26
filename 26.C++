//26.Roof Top//
class Solution {
  public:
    // Function to find maximum number of consecutive steps
    // to gain an increase in altitude with each step.
    int maxStep(vector<int>& arr) {
        // Your code here
        int count= 0 ;
        int maxi = 0 ;
        for(int i = 0; i<arr.size()-1 ;i++){
            if(arr[i]<arr[i+1]){
                count++ ;
                maxi = max(count,maxi) ;
            }
            else count = 0 ;
        }
        
        return maxi ;
    }
};