/*
check bad version 
we have 1,2,3,4,5
        G,G,G,B,B
        it can not be G,B,G,B
*/
class Solution {
public:
    int firstBadVersion(int n) {
        int left = 1;
        int right = n;

        while (left <= right) {
            int mid = left + (right - left) / 2;

            if (isBadVersion(mid))
                right = mid - 1;
            else
                left = mid + 1;
        }

        return left;
    }
};