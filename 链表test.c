#include<stdio.h>
#include<stdlib.h>

struct ListNode {
    int val;
    struct ListNode *next;
};

ListNode* createList(int a[],int n){
	struct ListNode *head=(struct ListNode*)malloc(sizeof(struct ListNode)); 
	head->next=NULL;
	struct ListNode *tail;
	tail=head;
	for(int i=0;i<n;i++){
		struct ListNode *p=(struct ListNode*)malloc(sizeof(struct ListNode));
		p->val=a[i];
		tail->next=p;
		p->next=NULL;
		tail=p;
		
	}
	return head;
  // TODO: 填写创建链表的函数
}
void output(ListNode* head){
	/*	list=head;
	while(list->next!=NULL){
		printf("%d\n",list->next->val);
		list=list->next;
	}*/
	while(head->next!=NULL){
		printf("%d\n",head->next->val);
		head=head->next;
	}
  // TODO: 填写输出每个节点值的函数
}

int main()
{
	int a[10000];
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
  	struct ListNode *list = createList(a, n);
  	output(list);
}

