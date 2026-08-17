class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
    int p = 1;
    int izero = -1;
    int zeros = 0;
    vector<int> ans;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
                izero = i;
                zeros++;
                if(zeros>1){
                    vector<int>e(nums.size(),0);
                    return  e;
                } 
            }else{
                p*=nums[i];
            }
        }
        if(zeros==0){
            for(int x : nums)
            ans.push_back(p/x);
        }else if(zeros==1){
            vector<int> e (nums.size(),0);
            e[izero]= p;
            ans = e;
        }else{
            vector<int> e (nums.size(),0);
            ans = e;
        }
        return ans;
    }
};
