#include <stdio.h>
#include <stdlib.h>

//定义一个类型的新名
typedef char datatype;
//单链表结构体
typedef struct node {
	datatype data;
	struct node* next;
}linklist;

linklist* CreatListF() {
	//带头结点的头插法，返回单链表的头指针
	linklist* head, * p;
	datatype ch;
	head = (linklist*)malloc(sizeof(linklist));//产生头结点
	head->next = NULL;
	while ((ch = getchar()) != '\n') {
		p=(linklist*)malloc(sizeof(linklist));//生成新结点
		p->data = ch;//对结点的数据域进行赋值
		p->next = head->next;
		head->next = p;
	}
	return head;
}
//主函数
int main() {
	linklist* head = (linklist*)malloc(sizeof(linklist));
	linklist* p = (linklist*)malloc(sizeof(linklist));
	head = CreatListF();
	p = head->next;
	while (p!=NULL) {
		printf("%c", p->data);
		p = p->next;
	}
	system("pause");
	return 0;
}
