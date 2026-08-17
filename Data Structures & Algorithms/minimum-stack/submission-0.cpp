class MinStack {
public:
    stack<int> v;
    stack<int> mini;
    MinStack() {

    }
    
    void push(int val) {
        v.push(val);
        if(mini.size()){
        mini.push(min(val,mini.top()));
        }else{
            mini.push(val);
        }
    }
    
    void pop() {
        v.pop();
        mini.pop();
    }
    
    int top() {
        return v.top();
    }
    
    int getMin() {
        return mini.top();
    }
};
