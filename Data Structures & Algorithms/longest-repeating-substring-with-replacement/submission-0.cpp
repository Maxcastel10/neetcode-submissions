class Solution {
public:
unordered_map<char,int> ch;
    int characterReplacement(string s, int k) {
        int smax = 0;
        int l = 0;
        int r = 0;
        while(r<s.size()){
            ch[s[r]]++;
            while(((r-l+1)-findmax())>k){
                ch[s[l]]--;
                l++;
            }
            smax=max(smax,r-l+1);
            r++;
        }
        return smax;
    }

    int findmax(){
        int chmax=0;
        for(auto x:ch){
            chmax=max(x.second,chmax);    
        }
        return chmax;
    }
};
