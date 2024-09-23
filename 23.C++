//23.Missing And Repeating//
class Solution {
  public:
    vector<int> findTwoElement(vector<int>& arr) {
        // code here
        int n=arr.size();
        for(int i=0;i<n;i++)
        {
            arr[i]--;
        }
        for(int i=0;i<n;i++)
        {
            while(arr[i]!=i && arr[arr[i]]!=arr[i])
            {
                swap(arr[i],arr[arr[i]]);
            }
        }
        vector<int>ans;
        for(int i=0;i<n;i++)
        {
            if(i!=arr[i]){
                ans.push_back(arr[i]+1);
                ans.push_back(i+1);
            }
        }
        return ans;
    }
};