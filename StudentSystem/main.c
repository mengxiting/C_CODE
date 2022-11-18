#define _CRT_SECURE_NO_WARNINGS 1

//流程
// 1.菜单设计
// 2.按键交互
// 3.设计数据
// 4.选择存储数据的方式/结构
//	链式结构;
#include "head.h"


struct Node* list = NULL;
void system_Menu()//菜单内容
{
	printf("----------------[学生管理系统]----------------\n");
	printf("\t\t0.退出系统\n");
	printf("\t\t1.插入信息\n");
	printf("\t\t2.浏览信息\n");
	printf("\t\t3.删除信息\n");
	printf("\t\t4.修改信息\n");
	printf("\t\t5.查找信息\n");
	printf("----------------------------------------------\n");
	printf("请输入(0-5):");
}
void KeyDown()//进行交互
{
	int userKey;
	struct student tempData;
	scanf("%d", &userKey);
	switch (userKey)
	{
	case 0:
		printf("\t\t[退出系统]\n");
		system("pause");
		exit(0);
		break;
	case 1:
		printf("\t\t[插入信息]\n");
		printf("请输入姓名,学号,年龄,电话,住址:");
		scanf("%s%s%d%s%s", tempData.name, tempData.num,&tempData.age,tempData.tel, tempData.addr);
		inserNodefront(list, tempData);
		saveInfoFromFile("student.txt", list);
		break;
	case 2:
		printf("\t\t[浏览信息]\n");
		printList(list);
		break;
	case 3:
		printf("\t\t[删除信息]\n");
		printf("请选择要删除的学生姓名:");
		scanf("%s", tempData.name);
		deleteNodebyAppointname(list, tempData.name);
		saveInfoFromFile("student.txt", list);
		break;
	case 4:
		printf("\t\t[修改信息]\n");
		printf("请输入要修改的学生的学号:");
		scanf("%s", tempData.num);
		if (searchNodebyAppointnum(list, tempData.num) == NULL)
		{
			printf("未找到相关信息!\n");
		}
		else
		{
			struct Node* curNode = searchNodebyAppointnum(list, tempData.num);
			printf("请输入新的姓名,学号,年龄,电话,住址:");
			scanf("%s%s%d%s%s", curNode->data.name,curNode->data.num, &curNode->data.age, curNode->data.tel, curNode->data.addr);
			saveInfoFromFile("student.txt", list);
		}
		break;
	case 5:
		printf("\t\t[查找信息]\n");
		printf("请输入要查找的学号:");
		scanf("%s", tempData.num);
		if (searchNodebyAppointnum(list, tempData.num) == NULL)
		{
			printf("未找到相关信息!\n");
		}
		else
		{
			printNode(searchNodebyAppointnum(list, tempData.num));
		}
		break;
	default:
		printf("输入错误!重新输入\n");
		break;
	}
}

int main()
{
	list = createList();
	readInfoFromFile("student.txt", list);
	while (1)
	{
		system_Menu();//设置菜单
		KeyDown();
		system("pause");
		system("cls");
	}
	return 0;
}