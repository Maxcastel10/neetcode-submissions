class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> h;
        int i=0;
        int j=0;
        int m=0;
        int z=0;
        while(j<s.size()){
            while(h.count(s[j])){
                h.erase(s[i]);
                i++;
            }
            h.insert(s[j]);
            z=h.size();
            m=max(m,z);
            j++;
        }
        return m;
    }
};
