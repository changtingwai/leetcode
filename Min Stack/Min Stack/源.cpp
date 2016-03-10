#include <iostream>
#include <stack>
using namespace std;
class MinStack {
private:
	stack<int> s;
	stack<int>trackMin;
public:
    void push(int x) {
		s.push(x);
		if(trackMin.empty()||x<=trackMin.top())
			trackMin.push(x);
    }

    void pop() {
		if(s.empty()) return;
		if(s.top()==trackMin.top())
			trackMin.pop();
		s.pop();
    }

    int top() {
        return s.top();
    }

    int getMin() {
        return trackMin.top();
    }
};
int main()
{
	return 0;
}