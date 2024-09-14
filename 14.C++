//14.Alternate positive and negative numbers//
class Solution {
  public:

    void rearrange(vector<int> &arr) {
        // code here
        vector<int> p;
        vector<int> n;
        for(int i=0;i<arr.size();i++){
            if(arr[i]>=0) p.push_back(arr[i]);
            if(arr[i]<0) n.push_back(arr[i]);
        }
        int i=0,j=0,k=0,s=0;
        while(i<p.size()and j<n.size() and k<arr.size()){
            if(s==0){
                arr[k]=p[i];
                i++;
                k++;
                s=1;
            }
            if(s==1){
                arr[k]=n[j];
                j++;
                k++;
                s=0;
            }
        }
         while(i<p.size()and k<arr.size()){
            
                arr[k]=p[i];
                i++;
                k++;
        }
         while(j<n.size() and k<arr.size()){
            
                arr[k]=n[j];
                j++;
                k++;
        }
    }
};
