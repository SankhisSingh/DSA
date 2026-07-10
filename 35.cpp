/*
Binary search problem
find target in array if not found then insert at sorted position
*/
class Solution{
    public:
     int searchInsert(vector<int>& nums, int target){
        int left=0;
        int right=mums.size()-1;
        while(left<right){
            int mid=left+(right-left)/2;
            if(nums[mid]==target)
             return mid;
        }
            else if(nums[mid]==target){
              left=mid+1;
        }
         else{
            right=mid-1;
         }
     }
     return left;
    }
};
