/*
1480. Running Sum of 1d Array
Easy
Topics
premium lock icon
Companies
Hint
Given an array nums. We define a running sum of an array as runningSum[i] = sum(nums[0]…nums[i]).

Return the running sum of nums.

 

Example 1:

Input: nums = [1,2,3,4]
Output: [1,3,6,10]
Explanation: Running sum is obtained as follows: [1, 1+2, 1+2+3, 1+2+3+4].
Example 2:

Input: nums = [1,1,1,1,1]
Output: [1,2,3,4,5]
Explanation: Running sum is obtained as follows: [1, 1+1, 1+1+1, 1+1+1+1, 1+1+1+1+1].
Example 3:

Input: nums = [3,1,2,10,1]
Output: [3,4,6,16,17]
 


*/
class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> ans;
        int sum=0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            ans.push_back(sum);
        }
        return ans;
    }
};
//or
class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        for(int i=1;i<nums.size();i++){
            nums[i]+=nums[i-1];
        }
        return nums;
    }
};
//or
class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        partial_sum(nums.begin(),nums.end(),nums.begin());
        return nums;
    }
};
//or
class Solution{
    public:
     vector<int> runningSum(vector<int>& nums){
       int n=nums.size();
       int prefix[n];
       prefix[0]=nums[0];
       for(int i=1;i<n;i++){
           prefix[i]=prefix[i-1]+nums[i];
       }
       return prefix;
     }
};