class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_set<int> vals;
        for(int x : nums){
            if(vals.count(x)){
                return x;
            }else{
                vals.insert(x);
            }
        }
    }
};
