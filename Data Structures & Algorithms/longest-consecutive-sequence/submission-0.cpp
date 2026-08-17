class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> s(nums.begin(), nums.end());
        int ans=0;
        int n=0;
        for(int x : s){
            if(!s.count(x-1)){
                n=1;
                while(s.count(x+n)){
                    n++;
                }
            };
            ans = max(ans,n);
        }
        return ans;
    }
};
