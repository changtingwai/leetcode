

 struct ListNode {
     int val;
     struct ListNode *next;
  };
 
void deleteNode(struct ListNode* node) {
	node->val=node->next->val;
	struct ListNode *p;
	p=node->next;
	node->next=p->next;
	delete p;
}