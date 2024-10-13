#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

typedef struct student{
	int id;
	int val;
	struct student *next;
}link;

link *creat(int n);

void change(link *head , int n);

int search(link *head , int n);

link *del(link *head , int n);


int main(){
	SetConsoleOutputCP(65001); //����API���������ÿ���̨���ҳ����Ϊutf-8
	int n;
	link *head , *t;
	
	printf("������Ҫ�������������");
	scanf("%d",&n);
	head = creat(n);
	printf("������Ҫɾ����val���±�");
	scanf("%d",n);
	head = del(head,n);
	
	t = head;//������֣�������
	while (t -> next != NULL){
		printf("%d ",t -> id);
		printf("%d\n",t ->val);
		t = t -> next;
	}
	printf("%d %d",t -> id , t->val);
	return 0;
}
link *del(link *head , int n){
	link *a , *b;
	int i = 0;
	b = head;
	if (n == 0){
		b = b -> next;
		free(head);
		head = b;
	}
	else{
		while(i < n && b != NULL){
			a = b;
			b = a -> next;
			i++;
		}
		if (b != NULL){
			a -> next = b -> next;
			free(b);
		}
	}
	return head;
}
