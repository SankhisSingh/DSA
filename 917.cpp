class Solution {
public:
    string reverseOnlyLetters(string s) {
        int left=0;
        int right=s.size()-1;
        while(left<right){
            if(!isalpha(s[right])){
                right--;

            }
            else if(!isalpha(s[left])){
                left++;

            }
            else{
            swap(s[left],s[right]);
            left++;
            right--;
            }
        }
        return s;
        }
};