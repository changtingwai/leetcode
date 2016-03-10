#include <iostream>
using namespace std;
#include <vector>
struct ListNode {
     int val;
     struct ListNode *next;
     ListNode(int x) :
             val(x), next(NULL) {
       }
  };

class Solution {
public:
    vector<int> printListFromTailToHead(struct ListNode* head) {
		vector<int>tmp;
		vector<int>res;
		struct ListNode* p;
		p=head;
		while(p!=NULL)
		{
			tmp.push_back(p->val);
			p=p->next;
		}
		int i=tmp.size()-1;
		while(i>=0)
		{
			res.push_back(tmp[i]);
			i--;
		}
		return res;
    }
};