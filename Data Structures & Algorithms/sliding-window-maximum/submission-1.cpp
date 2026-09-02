class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        multiset<int,greater<int>> mp;
        vector<int> vec;
        int s = nums.size();
        for(int i=0;i<k;i++){
            mp.insert(nums[i]);
        }
        vec.push_back(*mp.begin());
        if(s!=k){
            for(int i=0;i<s-k;i++){
                mp.insert(nums[i+k]);
                mp.erase(mp.find(nums[i]));
                vec.push_back(*mp.begin());
            }
        }
        return vec;
    }
};
