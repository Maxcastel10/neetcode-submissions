class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        int 
        z=nums.size();
        for (int i = 0 ; i < z - 1 ; i++){
            for (int j = i + 1 ; j < z ; j++){
                if (nums[i] == nums[j]){
                    return true;
                }
            }
        }
        return false;
    }
};
