#include <iostream>
using namespace std;
#include <stack>
class Solution
{
public:
    void push(int node) {
		stack1.push(node);
    }

    int pop() {
		if(!stack1.empty())
		{
			while(!stack1.empty())
			{
				stack2.push(stack1.top());
				stack1.pop();
			}

		}
		int x=stack2.top();
			stack2.pop();
			while(!stack2.empty())
			{
				stack1.push(stack2.top());
				stack2.pop();
			}
			return x;
		
		
    }

private:
    stack<int> stack1;
    stack<int> stack2;
};
int main()
{
	Solution s;
	s.push(1);
	s.push(2);
	cout<<s.pop();
}