/*

Code
Testcase
Testcase
Test Result
1456. Maximum Number of Vowels in a Substring of Given Length
Medium
Topics
premium lock icon
Companies
Hint
Given a string s and an integer k, return the maximum number of vowel letters in any substring of s with length k.

Vowel letters in English are 'a', 'e', 'i', 'o', and 'u'.

 

Example 1:

Input: s = "abciiidef", k = 3
Output: 3
Explanation: The substring "iii" contains 3 vowel letters.
Example 2:

Input: s = "aeiou", k = 2
Output: 2
Explanation: Any substring of length 2 contains 2 vowels.
Example 3:

Input: s = "leetcode", k = 3
Output: 2
Explanation: "lee", "eet" and "ode" contain 2 vowels.
 

*/
public:
    int maxVowels(string s, int k) {
        int count=0;
        int ans=0;
        int n=s.size()-1;
        for(int right=0;right<=n;right++){
            if(s[right]=='a'|| s[right]=='e' || s[right]=='i'|| s[right]=='o'|| s[right]=='u'){
            count++;
            }
            if(right>=k-1){
                ans = max(ans, count);

                // Remove leftmost character
                if (s[right - k + 1] == 'a' || s[right - k + 1] == 'e' ||
                    s[right - k + 1] == 'i' || s[right - k + 1] == 'o' ||
                    s[right - k + 1] == 'u') {
                    count--;
                    }

            }
        }
        return ans;
    }
};