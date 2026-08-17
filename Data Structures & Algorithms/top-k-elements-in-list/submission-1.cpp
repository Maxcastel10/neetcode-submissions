class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map <int,int> numstofreq ;
        vector<int> res;
        for (int x : nums){
            numstofreq[x]+=1;
        }

        priority_queue<pair<int,int>> maxheap;
        for(auto& entry : numstofreq){
            maxheap.push({entry.second,entry.first});
        }
        for(int i=0;i<k;i++){
            res.push_back(maxheap.top().second);
            maxheap.pop();
        }
        return res;
    }
};