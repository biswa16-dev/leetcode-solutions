#include <queue>
using namespace std;

class MyStack {
public:
    queue<int> q1, q2;

    MyStack() {
        
    }
    
    void push(int x) {
        // Move all elements from q1 to q2
        while (!q1.empty()) {
            q2.push(q1.front());
            q1.pop();
        }

        // Insert the new element first
        q1.push(x);

        // Move everything back to q1
        while (!q2.empty()) {
            q1.push(q2.front());
            q2.pop();
        }
    }
    
    int pop() {
        int x = q1.front();
        q1.pop();
        return x;
    }
    
    int top() {
        return q1.front();
    }
    
    bool empty() {
        return q1.empty();
    }
};