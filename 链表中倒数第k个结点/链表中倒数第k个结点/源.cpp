#include <iostream>
using namespace std;

struct ListNode {
	int val;
	struct ListNode *next;
	ListNode(int x) :
			val(x), next(NULL) {
	}
};
class Solution {
public:
    ListNode* FindKthToTail(ListNode* pListHead, unsigned int k) {
		if(pListHead==NULL||k==0)
			return NULL;
		ListNode* first = pListHead;
		ListNode* second = pListHead;
		unsigned int i=1;
		while(i<k&&first->next!=NULL){
			first=first->next;
			i++;
		}
		while(first->next!=NULL){
			first=first->next;
			second=second->next;
		}
		if(i>=k)
			return second;
		else
			return NULL;
    }
};