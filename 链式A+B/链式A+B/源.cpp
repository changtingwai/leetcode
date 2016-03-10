#include <iostream>
using namespace std;

struct ListNode {
    int val;
    struct ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};
class Plus {
public:
    ListNode* plusAB(ListNode* a, ListNode* b) {
        // write code here
		int count=0;
		int sig=0;
		int sum=0;
		ListNode *ha=a;
		ListNode *hb=b;
		ListNode *res;
		while(a->next!=NULL&&b->next!=NULL){
			sum=a->val+b->val+count;
			sig=sum%10;
			a->val=sig;
			b->val=sig;
			count = 0;
			if(sum>10){
				count=sum/10;
			}
			a=a->next;
			b=b->next;
		}
		sum=a->val+b->val+count;
		sig=sum%10;
		a->val=sig;
		b->val=sig;
		count = 0;
		if(sum>10){
			count=sum/10;
		}
		if(a->next==NULL&&b->next!=NULL){
			b=b->next;
			while(b->next!=NULL){
				sum=b->val+count;
				sig=sum%10;
				b->val=sig;
				count = 0;
				if(sum>10){
					count=sum/10;
				}
				b=b->next;
			}
			if(b->val+count<10){
				b->val+=count;
				
			}
			else{
				sum=b->val+count;
				sig=sum%10;
				b->val=sig;
				count=sum/10;
				ListNode *p=new ListNode(count);
				b->next=p;
			}
			return hb;
		}
		else if(b->next==NULL&&a->next!=NULL){
			a=a->next;
			while(a->next!=NULL){
				sum=a->val+count;
				sig=sum%10;
				a->val=sig;
				count = 0;
				if(sum>10){
					count=sum/10;
				}
				a=a->next;
			}
			if(a->val+count<10){
				a->val+=count;
				
			}
			else{
				sum=a->val+count;
				sig=sum%10;
				a->val=sig;
				count=sum/10;
				ListNode *p=new ListNode(count);
				a->next=p;
			}
			return ha;
		}
		else{
			if(count>0){
				ListNode *p=new ListNode(count);
				a->next=p;
			}
			return ha;
		}	
    }
};