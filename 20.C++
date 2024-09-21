//20.Facing the sun//
class Solution {
  public:
    // Returns count buildings that can see sunlight
    int countBuildings(vector<int>& heights) {
    int count = 0;
    int maxHeight = INT_MIN;

    for (int height : heights) {
        if (height > maxHeight) {
            maxHeight = height;
            count++;
        }
    }

    return count;
}

};