//8.Minimum Jumps//
class Solution {
public:
    int minJumps(vector<int>& arr) {
        int n = arr.size();
        int x = 0, y = 0, z = 0;
        for (int i = 0; i < n - 1; i++) {
            x = max(x, arr[i] + i);
            if (i == y) {
                y = x;
                z++;
            }
        }
        if (y >= n - 1) {
            return z;
        }
        return -1;
    }
};