class Solution {
public:

    vector<string> ans;

    void solve(string &s, int index, int parts, string current) {

        // We have 4 parts
        if(parts == 4) {

            if(index == s.size()) {
                ans.push_back(current);
            }

            return;
        }

        for(int len = 1; len <= 3; len++) {

            // Don't go outside string
            if(index + len > s.size()) {
                break;
            }

            string part = s.substr(index, len);

            // Leading zero
            if(part.size() > 1 && part[0] == '0') {
                continue;
            }

            // Convert to number
            int num = stoi(part);

            // Must be <= 255
            if(num > 255) {
                continue;
            }

            // Build next IP
            string next = current;

            if(parts > 0) {
                next += ".";
            }

            next += part;

            // Recursion
            solve(s, index + len, parts + 1, next);
        }
    }

    vector<string> restoreIpAddresses(string s) {

        solve(s, 0, 0, "");

        return ans;
    }
};