class Solution {
  public:

    long long maxSum(vector<int> &arr) {
        long long sum = 0;
        int n = arr.size(); // Size of the array

        // Sorting the array in ascending order
        sort(arr.begin(), arr.end());

        // Looping over the first half of the array
        for (int i = 0; i < n / 2; i++) {
            // Subtracting twice the current element and adding twice
            // the element at the opposite end of the array to the sum
            sum -= (2 * arr[i]);
            sum += (2 * arr[n - i - 1]);
        }

        // Returning the maximum sum
        return sum;
    }
};