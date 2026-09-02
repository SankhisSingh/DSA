class Solution {
public:
    int findMaxLength(vector<int>& nums) {

        unordered_map<int, int> mp;

        mp[0] = -1;

        int sum = 0;
        int maxLength = 0;

        for (int i = 0; i < nums.size(); i++) {

            if (nums[i] == 0)
                sum--;
            else
                sum++;

            if (mp.find(sum) != mp.end()) {
                maxLength = max(maxLength, i - mp[sum]);
            }
            else {
                mp[sum] = i;
            }
        }

        return maxLength;
    }
};