class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {

        unordered_map<int, int> mp;

        // remainder 0 exists before the array starts
        mp[0] = -1;

        int sum = 0;

        for (int i = 0; i < nums.size(); i++) {

            sum += nums[i];

            int rem = sum % k;

            if (mp.find(rem) != mp.end()) {

                if (i - mp[rem] >= 2) {
                    return true;
                }

            }
            else {
                mp[rem] = i;
            }
        }

        return false;
    }
};