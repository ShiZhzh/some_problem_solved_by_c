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
	SetConsoleOutputCP(65001); //调用API函数，设置控制台输出页编码为utf-8
	int n;
	link *head , *t;
	
	printf("请输入要生成链组的数量");
	scanf("%d",&n);
	head = creat(n);
	printf("请输入要删除的val的下标");
	scanf("%d",n);
	head = del(head,n);
	
	t = head;//输出部分，检验结果
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
