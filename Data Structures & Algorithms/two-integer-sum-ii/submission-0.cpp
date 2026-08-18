class Solution {
public:
    vector<int> twoSum(vector<int>& n, int t) {
        int l=0;
        int r=n.size()-1;
        while(n[l]+n[r]!=t){
            if(n[l]+n[r]>t){
                r--;
            }
            else{
                l++;
            }
        }
        return (vector<int>){l+1,r+1};
    }
};
