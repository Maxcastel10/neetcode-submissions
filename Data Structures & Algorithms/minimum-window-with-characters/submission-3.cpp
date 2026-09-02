class Solution {
public:
    string minWindow(string s, string t) {
        unordered_map<char, int> ht;
        unordered_map<char, int> st;

        for (char c : t) {
            ht[c]++;
        }

        int left = 0;
        int right = 0;

        int ansl = 0;
        int ansLen = INT_MAX;

        while (right < s.size()) {

            // Expand window
            if (ht.count(s[right])) {
                st[s[right]]++;
            }

            right++;

            // Check if valid
            bool valid = true;

            for (auto &[ch, count] : ht) {
                if (st[ch] < count) {
                    valid = false;
                    break;
                }
            }

            // Shrink while valid
            while (valid) {

                // Update minimum answer
                if (right - left < ansLen) {
                    ansLen = right - left;
                    ansl = left;
                }

                // Remove left character
                if (ht.count(s[left])) {
                    st[s[left]]--;
                }

                left++;

                // Check validity again
                valid = true;

                for (auto &[ch, count] : ht) {
                    if (st[ch] < count) {
                        valid = false;
                        break;
                    }
                }
            }
        }

        if (ansLen == INT_MAX)
            return "";

        return s.substr(ansl, ansLen);
    }
};