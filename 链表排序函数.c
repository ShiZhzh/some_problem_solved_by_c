ListNode* sortList(struct ListNode* head){
	struct ListNode*p=NULL;
	struct ListNode*q=NULL;
	struct ListNode*a=NULL;
	a=head;
	p=head;
	q=p->next;
	int i=0;
	while(p!=NULL){
		if(head->val>=p->val){
			i=1;
		}else{
			i=0;
			break;
		}
		p=p->next;
	}
	p=head;
	q=p->next;
	if(i=0){
		while(p!=NULL){
		q=p->next;
		while(q!=NULL){
			if(q->val<p->val){
				p->next=q->next;
				q->next=p;
				a->next=q;
				}
			q=q->next;
			} 
		a=p;
		p=p->next;
		}
	}
	if(i=1){
		while(q!=NULL){
			q=q->next;
		}
		head=p->next;
		q->next=p;
		p->next=NULL;	
	}
	return head;
  // TODO: ÌîĞ´Á´±íÅÅĞòµÄº¯Êı
}
