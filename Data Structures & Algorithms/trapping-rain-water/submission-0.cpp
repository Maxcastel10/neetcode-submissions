class Solution {
public:
    int trap(vector<int>& h) {
        int l=0;
        int r=h.size()-1;
        int lvl=0;
        int maxl=h[l];
        int maxr=h[r];
        int vol=0;
        while(l<r){
            if(maxl<maxr){
                l++;
                maxl=max(maxl,h[l]);
                vol+=maxl-h[l];
            }else{
                r--;
                maxr=max(maxr,h[r]);
                vol+=maxr-h[r];
            }
        }
        return vol;
    }
};
