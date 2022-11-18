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


//链式结构
struct Node
{
	struct student data;
	struct Node* next;
};

//.1.1链表是什么?	结构体变量和结构体变量连在一起
// 1.2指针的第二种变为变量的方式:动态内存申请
// 1.3用第一个节点表示整个链表
// 
//创建链表
struct Node* createList()
{
	//产生一个结构体变量
	struct Node* headNode = (struct Node*)malloc(sizeof(struct Node));
	//初始化一个变量
	headNode->next = NULL;
	return headNode;
}

//创建节点
struct Node* createNode(struct student data)
{
	struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
	newNode->data = data;
	newNode->next = NULL;
	return newNode;
}

//插入节点
void inserNodefront(struct Node* headNode, struct student data)
{
	struct Node* newNode = createNode(data);
	newNode->next = headNode->next;
	headNode->next=newNode;
}

//删除节点
void deleteNodebyAppointname(struct Node* headNode,char* name)
{
	struct Node* posFrontNode = headNode;
	struct Node* posNode = headNode->next;
	if (posNode == NULL)
	{
		printf("无相关内容,无法删除!");
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
				printf("无相关内容,无法删除!");
				return;
			}
		}
		posFrontNode->next = posNode->next;
		free(posNode);
	}
}
//查找学号
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
	printf("姓名\t学号\t年龄\t电话\t\t住址\n");
	printf("%s\t%s\t%d\t%s\t%s\n", curNode->data.name, curNode->data.num, curNode->data.age, curNode->data.tel, curNode->data.addr);
}
//打印过程 浏览信息
void printList(struct Node* headNode)
{
	struct Node* pMove = headNode->next;
	printf("姓名\t学号\t年龄\t电话\t\t住址\n");
	while (pMove)
	{
		printf("%s\t%s\t%d\t%s\t%s\n", pMove->data.name, pMove->data.num, pMove->data.age, pMove->data.tel,pMove->data.addr);
		pMove=pMove->next;
	}
	printf("\n");
}

//同步到文件
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