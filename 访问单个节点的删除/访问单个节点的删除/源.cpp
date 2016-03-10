#include <iostream>
using namespace std;

struct ListNode {
    int val;
    struct ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};
class Remove {
public:
    bool removeNode(ListNode* pNode) {
        // write code here
        ListNode* p;
        
		if(pNode->next!=NULL){
			p=pNode->next;
 			pNode=p;
			pNode->next=p->next;
			return true;
        }
		else
			return false;
    }
};