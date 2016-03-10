#include <iostream>
#include <stdlib.h>
#include<algorithm>
using namespace std;
 struct ListNode {
      int val;
      ListNode *next;
      ListNode(int x) : val(x), next(NULL) {}
  };
 
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
		ListNode *p;
		p=new ListNode(0);
		ListNode *head;
		head=p;
		while(1)
		{
			if(l1==NULL) {p->next=l2;break;}
			if(l2==NULL) {p->next=l1;break;}
			if(l1->val < l2->val)
			{
				p->next=l1;
				l1=l1->next;
			}
			else
			{
				p->next=l2;
				l2=l2->next;
			}
			p=p->next;
		}
	
	}
		
	int count(ListNode* l)
	{
		int i=0;
		while(l!=NULL)
		{
			i++;
			l=l->next;
		}
			
		return i;
	}
};
int main()
{
	//Solution s;
	//ListNode* l1;
	//ListNode* l2;
	//ListNode* l;
	//l1->val=1;
	//l2->val=2;
	//l1->next->val=3;
	//l2->next->val=4;
	//l=s.mergeTwoLists(l1,l2);
	int a[]={1,2,5,3,2};
	sort(a[0],a[4]);
	cout<<a[4]<<endl;
	system("pause");
	return 0;
}