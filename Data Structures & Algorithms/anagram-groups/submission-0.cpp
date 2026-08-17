class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> anagramGroups;
        
        for (const string& str : strs) {
            string key = str;
            sort(key.begin(), key.end()); // Sort the string to get the key
            anagramGroups[key].push_back(str);
        }
        
        vector<vector<string>> result;
        for (auto& entry : anagramGroups) {
            result.push_back(entry.second);
        }
        
        return result;
    }
};
