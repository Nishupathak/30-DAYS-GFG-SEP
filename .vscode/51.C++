class Solution {
  public:
    int getSingle(vector<int>& arr) {
        // code here
        int a=arr[0];
        for(int i=1;i<arr.size();i++){
            a=a xor arr[i];
        }
        return a;
    }
};