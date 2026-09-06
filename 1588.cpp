class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {

        int n = arr.size();

        // Prefix sum
        vector<int> prefix(n + 1, 0);

        for (int i = 0; i < n; i++) {
            prefix[i + 1] = prefix[i] + arr[i];
        }

        int total = 0;

        // Choose starting point
        for (int start = 0; start < n; start++) {

            // Choose ending point
            for (int end = start; end < n; end += 2) {

                // Sum of subarray [start ... end]
                total += prefix[end + 1] - prefix[start];
            }
        }

        return total;
    }
};