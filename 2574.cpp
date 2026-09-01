class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int total = 0;
        for(int num:nums){
            total+=num;
        }
        vector <int> answer;
        int leftSum=0;
        for(int i=0; i<nums.size();i++){
            int rightSum=total-leftSum-nums[i];
            answer.push_back(abs(leftSum-rightSum));
            leftSum+=nums[i];
        }
        return answer;
    }
};