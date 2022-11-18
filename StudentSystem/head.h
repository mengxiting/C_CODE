#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


struct student
{
	char name[20];
	char num[10];
	int age;
	char tel[20];
	char addr[20];
};


//��ʽ�ṹ
struct Node
{
	struct student data;
	struct Node* next;
};

//.1.1������ʲô?	�ṹ������ͽṹ���������һ��
// 1.2ָ��ĵڶ��ֱ�Ϊ�����ķ�ʽ:��̬�ڴ�����
// 1.3�õ�һ���ڵ��ʾ��������
// 
//��������
struct Node* createList()
{
	//����һ���ṹ�����
	struct Node* headNode = (struct Node*)malloc(sizeof(struct Node));
	//��ʼ��һ������
	headNode->next = NULL;
	return headNode;
}

//�����ڵ�
struct Node* createNode(struct student data)
{
	struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
	newNode->data = data;
	newNode->next = NULL;
	return newNode;
}

//����ڵ�
void inserNodefront(struct Node* headNode, struct student data)
{
	struct Node* newNode = createNode(data);
	newNode->next = headNode->next;
	headNode->next=newNode;
}

//ɾ���ڵ�
void deleteNodebyAppointname(struct Node* headNode,char* name)
{
	struct Node* posFrontNode = headNode;
	struct Node* posNode = headNode->next;
	if (posNode == NULL)
	{
		printf("���������,�޷�ɾ��!");
		return;
	}
	else
	{
		while (strcmp(posNode->data.name,name))
		{
			posFrontNode = posNode;
			posNode = posFrontNode->next;
			if (posNode == NULL)
			{
				printf("���������,�޷�ɾ��!");
				return;
			}
		}
		posFrontNode->next = posNode->next;
		free(posNode);
	}
}
//����ѧ��
struct Node* searchNodebyAppointnum(struct Node* headNode, char* num)
{
	struct Node* pMove = headNode->next;
	if (pMove == NULL)
	{
		return pMove;
	}
	else
	{
		while (strcmp(pMove->data.num, num))
		{
			pMove = pMove->next;
			if (pMove == NULL)
				break;
		}
		return pMove;
	}
}

void printNode(struct Node* curNode)
{
	printf("����\tѧ��\t����\t�绰\t\tסַ\n");
	printf("%s\t%s\t%d\t%s\t%s\n", curNode->data.name, curNode->data.num, curNode->data.age, curNode->data.tel, curNode->data.addr);
}
//��ӡ���� �����Ϣ
void printList(struct Node* headNode)
{
	struct Node* pMove = headNode->next;
	printf("����\tѧ��\t����\t�绰\t\tסַ\n");
	while (pMove)
	{
		printf("%s\t%s\t%d\t%s\t%s\n", pMove->data.name, pMove->data.num, pMove->data.age, pMove->data.tel,pMove->data.addr);
		pMove=pMove->next;
	}
	printf("\n");
}

//ͬ�����ļ�
void readInfoFromFile(char* fileName, struct Node* headNode)
{
	FILE* fp = fopen(fileName, "r");
	if (fp == NULL)
	{
		fp = fopen(fileName, "w");
	}
	struct student tempData;
	while (fscanf(fp, "%s\t%s\t%d\t%s\t%s\n", tempData.name, tempData.num, &tempData.age, tempData.tel, tempData.addr) != EOF)
	{
		inserNodefront(headNode, tempData);
		memset(&tempData, 0, sizeof(tempData));
	}
	fclose(fp);
}


void saveInfoFromFile(char* fileName, struct Node* headNode)
{
	FILE* fp = fopen(fileName, "w");
	struct Node* pMove = headNode->next;
	while (pMove != NULL)
	{
		fprintf(fp,"%s\t%s\t%d\t%s\t%s\n", pMove->data.name, pMove->data.num, pMove->data.age, pMove->data.tel, pMove->data.addr);
		pMove = pMove->next;
	}
	fclose(fp);
}