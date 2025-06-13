class Solution {
public:
    string longestPalindrome(string s) {
        int n = s.length();
        if (n == 0) return "";

        vector<vector<bool>> dp(n, vector<bool>(n, false));
        string longest = "";
        for (int len = 1; len <= n; len++) {
            for (int i = 0; i <= n - len; i++) {
                int j = i + len - 1;
                if (s[i] == s[j]) {
                    if (len == 1 || len == 2 || dp[i+1][j-1]) {
                        dp[i][j] = true;
                        if (len > longest.length()) {
                            longest = s.substr(i, len);
                        }
                    }
                }
            }
        }

        return longest;
    }
};
