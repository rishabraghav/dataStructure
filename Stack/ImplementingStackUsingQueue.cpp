class MyStack {
    queue<int> q;
    queue<int> q1;
public:
    MyStack() {
        
    }
    
    void push(int x) {
        q.push(x);
    }
    
    int pop() {
        int temp;
        
        while(!q.empty()) {
            temp = q.front();
            q1.push(q.front());
            q.pop();
        }
        int ans = temp;
        
        while(!q1.empty()) {
            if(q1.front() != ans) {
                q.push(q1.front());
            }
            q1.pop();
        }
        return ans;
    }
    
    int top() {
        int temp;
        
        while(!q.empty()) {
            temp = q.front();
            q1.push(q.front());
            q.pop();
        }
        int ans = temp;
        
        while(!q1.empty()) {
            q.push(q1.front());
            q1.pop();
        }
        return ans;
    }
    
    bool empty() {
        return q.empty();
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */