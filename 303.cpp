/*
List
Debugging...
Debugging...









0
0Streaks
Extend Your Streak!
DCC Badge

avatar
Avatar
SankhisSingh
Access all features with our Premium subscription!
myLists
My Lists
notebook
Notebook
progress
Progress
points
Points
Try New Features
Orders
My Playgrounds
Settings
Appearance
Sign Out
Premium
Description
Editorial
Editorial
Solutions
Solutions
Submissions
Submissions


Code
Testcase
Testcase
Test Result
303. Range Sum Query - Immutable
Solved
Easy
Topics
premium lock icon
Companies
Given an integer array nums, handle multiple queries of the following type:

Calculate the sum of the elements of nums between indices left and right inclusive where left <= right.
Implement the NumArray class:

NumArray(int[] nums) Initializes the object with the integer array nums.
int sumRange(int left, int right) Returns the sum of the elements of nums between indices left and right inclusive (i.e. nums[left] + nums[left + 1] + ... + nums[right]).
 

Example 1:

Input
["NumArray", "sumRange", "sumRange", "sumRange"]
[[[-2, 0, 3, -5, 2, -1]], [0, 2], [2, 5], [0, 5]]
Output
[null, 1, -1, -3]

Explanation
NumArray numArray = new NumArray([-2, 0, 3, -5, 2, -1]);
numArray.sumRange(0, 2); // return (-2) + 0 + 3 = 1
numArray.sumRange(2, 5); // return 3 + (-5) + 2 + (-1) = -1
numArray.sumRange(0, 5); // return (-2) + 0 + 3 + (-5) + 2 + (-1) = -3
*/
class NumArray {
public:
    vector<int> prefix;
    NumArray(vector<int>& nums) {
        int n=nums.size();
         prefix.resize(n);
         prefix[0]=nums[0];
         for(int i=1;i<n;i++){
            prefix[i]=prefix[i-1]+nums[i];
         }
    }
    
    int sumRange(int left, int right) {
       if(left==0){
        return prefix[right];
       
       }
       else{
        return prefix[right]-prefix[left-1];
       }
    }
}
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */