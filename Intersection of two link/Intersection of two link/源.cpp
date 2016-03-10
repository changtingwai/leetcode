#include <iostream>
#include <stdlib.h>
#include <vector>
#include<queue>
#include <set>
using namespace std;
  struct ListNode {
      int val;
      ListNode *next;
      ListNode(int x) : val(x), next(NULL) {}
  };

class Solution {
public:
    ListNode *getIntersectionNode_back(ListNode *headA, ListNode *headB) {
		ListNode *pa=headA;
		ListNode *pb=headB;
		while(pa!=NULL)
		{
			while (pb!=NULL)
			{
				if(pa==pb)
					return pa;
				pb=pb->next;
			}
			pb=headB;
			pa=pa->next;
		}

    }
ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
		if(headA==NULL||headB==NULL)
			return NULL;
        ListNode *pa=headA;
		ListNode *pb=headB;
		int counta=0;
		int countb=0;
		while(pa->next!=NULL)
		{
			pa=pa->next;
			counta++;
		}
		counta++;	
		while(pb->next!=NULL)
		{
			pb=pb->next;
			countb++;
		}
		countb++;	
		if(pa==pb)
		{
			int i=0;
			pa=headA;
			pb=headB;
			if(counta>countb)
			{
				i=0;
				while(i<counta-countb)
				{
					pa=pa->next;
					i++;
				}
				while(pa!=NULL&&pb!=NULL)
				{
					if(pa==pb)
					{
						return pa;
						break;
					}
					pa=pa->next;
					pb=pb->next;
				}
			}
			else
			{
				i=0;
				while(i<countb-counta)
				{
					pb=pb->next;
					i++;
				}
				while(pa!=NULL&&pb!=NULL)
				{
					if(pa==pb)
					{
						return pa;
						break;
					}
					pa=pa->next;
					pb=pb->next;
				}
			}
				
		}
		else
			return NULL;
    }
};

int main()
{
	Solution s;



	system("pause");
		return 0;
}