#include <iostream>
#include <stdlib.h>
#include <vector>
#include<queue>
using namespace std;
class Stack {
	queue<int>q;
	
public:
    // Push element x onto stack.
    void push(int x) {
		q.push(x);
    }

    // Removes the element on top of the stack.
    void pop() {
		queue<int>temp;
		int length=q.size();
		for(int i=0;i<length-1;i++)
		{
			temp.push(q.front());
			q.pop();
		}
		q.pop();
		q=temp;
			
    }

    // Get the top element.
    int top() {
		queue<int>temp;
		temp=q;
		int length=q.size();
		for(int i=0;i<length-1;i++)
		{
			q.pop();
		}
		int x=q.front();
		q=temp;
		return x;
    }

    // Return whether the stack is empty.
    bool empty() {
		return (q.empty());
    }
};
int main()
{
	Stack s;
	s.push(1);
	s.push(2);
	s.pop();
	s.pop();
	cout<<s.empty();

	system("pause");
		return 0;
}