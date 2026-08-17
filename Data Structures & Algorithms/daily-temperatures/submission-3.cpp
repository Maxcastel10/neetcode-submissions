class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        vector<int> sol(temperatures.size(),0);
        stack<int> sk;
        for(int i=0; i<temperatures.size();i++){
            while(!sk.empty() && temperatures[sk.top()]<temperatures[i]){
                sol[sk.top()]=i-sk.top();
                sk.pop();
            }
            sk.push(i);
        }
        return sol;
    }
};
