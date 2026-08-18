class Solution {
public:
    bool isPalindrome(string s) {
        vector<char> vec;
        transform(s.begin(), s.end(), s.begin(),::tolower);
        cout<<s<<endl;
        for(int i=0;i<s.size();i++){
            if(((int)s[i]>47 && (int)s[i]<58) || ((int)s[i]>96 && (int)s[i]<122)){
                vec.push_back(s[i]);
                // cout<<s[i];
            } 
        }
        int l=0;
        int r=vec.size()-1;
        while(r>l){
            // cout<<endl<<vec[l]<<vec[r];
            if(!(vec[r]==vec[l])){
                return 0;
            }

            l++;
            r--;

        }
        return 1;
    }
};
