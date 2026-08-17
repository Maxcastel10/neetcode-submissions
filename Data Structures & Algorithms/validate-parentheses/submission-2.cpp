class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        unordered_map<char,char> map ={
            {']','['},
            {'}','{'},
            {')','('}
        };

        for (char c : s){
            if(map.count(c)){
                if(!st.empty() && st.top()==map[c]){
                    st.pop();
                }else{
                    return 0;
                }
            }else{
                st.push(c);
            }        
        }
        if(!st.empty()){
            return 0;
        }
        return 1;
    }
};
