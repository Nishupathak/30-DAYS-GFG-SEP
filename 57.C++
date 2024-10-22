class Solution {
  public:
    int sameOccurrence(vector<int>& arr, int x, int y) {
        // code here
        unordered_map<int, int> map;
        map[0] = 1;  // Initialize the map with 0 difference count
        int ans = 0;
        int countX = 0;
        int countY = 0;
        int n = arr.size();
        for (int i = 0; i < n; i++) {
            if (arr[i] == x) {
                ++countX;
            }
            if (arr[i] == y) {
                ++countY;
            }
            int diff = countX - countY;
            if (map.find(diff) != map.end()) {
                ans += map[diff];
            }
            map[diff]++;
        }
    
        return ans;
    }
};