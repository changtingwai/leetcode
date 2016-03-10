# include <iostream>
# include <stdlib.h>
using namespace std;
class Queue {

int a[100];
int front;
int tail;
public:
	Queue(){
	a[100]=0;
	front=0;
	tail=0;
}
    // Push element x to the back of queue.
    void push(int x) {
		a[tail]=x;
		tail++;
    }

    // Removes the element from in front of queue.
    void pop(void) {
		front++;
    }

    // Get the front element.
    int peek(void) {

		return a[front] ;
    }

    // Return whether the queue is empty.
    bool empty(void) {
        if (front==tail)
			return true;
		else 
			return false;
    }
};
int main()
{
	Queue q;
	q.push(1);
	q.push(2);
	cout<<q.peek();
	cout<<q.empty();
	system("pause");
	return 0;

}