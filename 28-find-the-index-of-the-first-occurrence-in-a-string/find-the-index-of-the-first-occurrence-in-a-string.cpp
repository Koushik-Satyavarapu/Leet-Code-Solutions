class Solution {
public:
    int strStr(string haystack, string needle) {
        if (needle.empty()) return 0;

        int h_len = haystack.size();
        int n_len = needle.size();

        if (h_len < n_len) return -1;

        for (int i = 0; i <= h_len - n_len; i++) {
            int j = 0;
            while (j < n_len && haystack[i + j] == needle[j]) {
                j++;
            }
            if (j == n_len) {
                return i;
            }
        }
        return -1;
    }
};
