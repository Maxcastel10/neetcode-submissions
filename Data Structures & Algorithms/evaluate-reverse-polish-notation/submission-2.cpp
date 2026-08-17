class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> sol;
        int a;
        int b;
        int ans;
        for(auto x : tokens){
            if(x == "+"){
                a=sol.top();
                sol.pop();
                b=sol.top();
                sol.pop();
                sol.push(b+a);
            }else if(x == "-"){
                a=sol.top();
                sol.pop();
                b=sol.top();
                sol.pop();
                sol.push(b-a);
            }else if(x=="*"){
                a=sol.top();
                sol.pop();
                b=sol.top();
                sol.pop();
                sol.push(b*a);
            }else if(x=="/"){
                a=sol.top();
                sol.pop();
                b=sol.top();
                sol.pop();
                sol.push(b/a);
            }
            else{
                int num = stoi(x);
                sol.push(num);
            }
        }
        return sol.top();
    }
};
