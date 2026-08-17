class Solution {
public:

    string encode(vector<string>& strs) {
            int s = strs.size();
            string ans = "";
            for(int i=0 ; i<s;i++){
                for(int j=0;j<strs[i].length();j++){
                    if(strs[i][j]=='_' || strs[i][j]=='/') {
                        ans+='/';
                    }
                    ans+=strs[i][j];
                }
                ans.append("_");
            }
            return ans;

    }

    vector<string> decode(string s) {
        vector<string> ans;
        string temp ="";
        int i=0;
        while(i<s.length()){
            if(s[i]=='/'){
                temp+=s[i+1];
                i++;
                i++;
            }
            else if(s[i]=='_'){
                ans.push_back(temp);
                temp="";
                i++;
            }
            else{
                temp+=s[i];
                i++;
            }
        }
        return ans;
    }
};
