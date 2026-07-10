/*

Code
Testcase
Testcase
Test Result
3065. Minimum Operations to Exceed Threshold Value I
Solved
Easy
Topics
premium lock icon
Companies
Hint
You are given a 0-indexed integer array nums, and an integer k.

In one operation, you can remove one occurrence of the smallest element of nums.

Return the minimum number of operations needed so that all elements of the array are greater than or equal to k.

 
*/
class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int count = 0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]<k)count++;
        }
        return count;
    }
};