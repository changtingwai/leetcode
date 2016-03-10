#include <iostream>
#include <stdlib.h>
#include <stack>
using namespace std;
  struct ListNode {
      int val;
      ListNode *next;
      ListNode(int x) : val(x), next(NULL) {}
  };
class Solution {
public:
    bool isPalindrome(ListNode* head) {
		if(head==NULL||head->next==NULL)
			return true;
        ListNode * slow,* fast;
		stack<int>s;
		slow=head;
		fast=head;
		s.push(head->val);
		while(fast->next!=NULL&&fast->next->next!=NULL)
		{
			fast=fast->next->next;
			slow=slow->next;
			s.push(slow->val);
		}
		if(fast->next==NULL) s.pop();//奇数不用比中间的数
		while(slow->next!=NULL)
		{
			slow=slow->next;
			if(slow->val!=s.top())
				return false;
			else
			{
				s.pop();
			}
		}
		return true;

    }
};
int main()
{
	ListNode *p=new ListNode(1);
	ListNode *p1=new ListNode(2);
	p->next=p1;
	Solution s;
	s.isPalindrome(p);
	system("pause");
	return 0;
}