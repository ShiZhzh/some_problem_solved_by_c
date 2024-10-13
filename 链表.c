#include "stdio.h"
#include "stdlib.h"

struct ListNode {
    int val;
    struct ListNode *next;
};

struct ListNode *createList(int a[], int n);

struct ListNode *sortList(struct ListNode *head);

void output(struct ListNode *head);

struct ListNode *insertNode(struct ListNode *head, int n);

struct ListNode *removeNode(struct ListNode *head, int n);

int main() {
    int a[10000];
    int n, ins, rm;
    scanf("%d", &n);
    scanf("%d", &ins);
    scanf("%d", &rm);
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    struct ListNode *list = createList(a, n);
    output(list);
    list = sortList(list);
    output(list);
    list = insertNode(list, ins);
    output(list);
    list = removeNode(list, rm);
    output(list);
    return 0;
}

ListNode* createList(int a[],int n){
	struct ListNode *head=(struct ListNode*)malloc(sizeof(struct ListNode)); 
	struct ListNode *p=NULL;
	p=head;
	p->next=NULL;
	p->val=a[0];
	for(int i=1;i<n;i++){
		struct ListNode *q=(struct ListNode*)malloc(sizeof(struct ListNode));
		q->val=a[i];
		q->next=NULL;
		p->next=q;
		p=q;
	}
	return head;
  // TODO: 填写创建链表的函数
}
ListNode* sortList(struct ListNode* head){
	struct ListNode*p=NULL;
	struct ListNode*q=NULL;
	p=head;
	q=p->next;
	int t=0;
    while (p->next != NULL)
    {
        q = p ->next;
        while (q!= NULL)
        {
            if (p ->val > q->val)
            {
                t=p->val;
                p->val = q->val;
                q->val = t;
            }
            q = q->next;
        }
        p = p->next;
    }
	return head;
  // TODO: 填写链表排序的函数
}
void output(ListNode* head){
	struct ListNode *p=NULL;
	p=head;
	while(p!=NULL){
		printf("%d\n",p->val);
		p=p->next;
	}
  // TODO: 填写输出每个节点值的函数
}
ListNode* insertNode(ListNode* head,int n){
	struct ListNode*p=NULL;
	struct ListNode*q=NULL;
	p=head;
	q=p->next;
	while(q!=NULL){
		if((p->val)<=n&&(q->val)>n){
			struct ListNode*newl=(struct ListNode*)malloc(sizeof(struct ListNode)) ;
			newl->val=n;
			newl->next=q;
			p->next=newl;
			break;
		}
		p=q;
		q=q->next;
	}
	if(q==NULL){
		struct ListNode*newl=(struct ListNode*)malloc(sizeof(struct ListNode)) ;
		newl->val=n;
		newl->next=NULL;
		p->next=newl;
	}
	return head;
  // TODO: 填写向有序链表插入值的函数
}
ListNode* removeNode(ListNode* head,int n){
	struct ListNode*p=NULL;
	struct ListNode*q=NULL;
	p=head;
	q=p->next;
	while(q!=NULL){
		if(q->val==n){
		p->next=q->next;
		free(q);
		break;
		}
		p=q;
		q=q->next;
	}
		return head;
  // TODO: 填写删除链表中指定值的函数
}
