class Solution {
public:
    int search(vector<int>& nums, int target) {
        int low = 0;
        int high = nums.size()-1;
        while(low<high){
            int mid = low + (high - low) / 2;
            if(nums[mid]<nums[high]){
                high = mid;
            }else{
                low = mid+1;
            }
        }
        high = low + nums.size() - 1;
        while(low <= high){
            int mid = low + (high - low) / 2;
            if(nums[mid%nums.size()]==target){
                return mid%nums.size();
            }else if(nums[mid%nums.size()]>target){
                high = mid - 1;
            }else{
                low = mid + 1;
            }
        }
        return -1;
        
    }
};
