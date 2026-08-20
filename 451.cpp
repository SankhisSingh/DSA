class Solution {
public:
    string frequencySort(string s) {

        string ans = "";

        int freq[256] = {0};

        // Count frequency
        for(char c : s) {
            freq[c]++;
        }

        // Find maximum frequency
        int maxFreq = 0;

        for(int i = 0; i < 256; i++) {
            maxFreq = max(maxFreq, freq[i]);
        }

        // Process highest frequency to lowest
        for(int f = maxFreq; f >= 1; f--) {

            for(int i = 0; i < 256; i++) {

                if(freq[i] == f) {

                    for(int j = 0; j < f; j++) {
                        ans.push_back((char)i);
                    }
                }
            }
        }

        return ans;
    }
};