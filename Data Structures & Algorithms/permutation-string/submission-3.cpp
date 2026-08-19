class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        unordered_map<char,int> h1;
        unordered_map<char,int> h2;
        for(char s:s1){
            h1[s]++;
        }

        int i=0;
        int j=0;
        while(j<s1.size()){
           h2[s2[j]]++; 
           j++;           
        }
        if(h1==h2){
            return true;
        }
        while(j<s2.size()){
            h2[s2[j]]++;
            h2[s2[i]]--;
            if(h2[s2[i]]==0){
                h2.erase(s2[i]);
            }
            j++;
            i++;

            if(h1==h2){
                return true;
            }
        }
        return 0;
    }
};
