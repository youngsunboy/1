#include <stdio.h>
#include <stdlib.h>

//����һ�����͵�����
typedef char datatype;
//������ṹ��
typedef struct node {
	datatype data;
	struct node* next;
}linklist;

linklist* CreatListF() {
	//��ͷ����ͷ�巨�����ص������ͷָ��
	linklist* head, * p;
	datatype ch;
	head = (linklist*)malloc(sizeof(linklist));//����ͷ���
	head->next = NULL;
	while ((ch = getchar()) != '\n') {
		p=(linklist*)malloc(sizeof(linklist));//�����½��
		p->data = ch;//�Խ�����������и�ֵ
		p->next = head->next;
		head->next = p;
	}
	return head;
}
//������
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
