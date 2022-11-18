#define _CRT_SECURE_NO_WARNINGS 1

//����
// 1.�˵����
// 2.��������
// 3.�������
// 4.ѡ��洢���ݵķ�ʽ/�ṹ
//	��ʽ�ṹ;
#include "head.h"


struct Node* list = NULL;
void system_Menu()//�˵�����
{
	printf("----------------[ѧ������ϵͳ]----------------\n");
	printf("\t\t0.�˳�ϵͳ\n");
	printf("\t\t1.������Ϣ\n");
	printf("\t\t2.�����Ϣ\n");
	printf("\t\t3.ɾ����Ϣ\n");
	printf("\t\t4.�޸���Ϣ\n");
	printf("\t\t5.������Ϣ\n");
	printf("----------------------------------------------\n");
	printf("������(0-5):");
}
void KeyDown()//���н���
{
	int userKey;
	struct student tempData;
	scanf("%d", &userKey);
	switch (userKey)
	{
	case 0:
		printf("\t\t[�˳�ϵͳ]\n");
		system("pause");
		exit(0);
		break;
	case 1:
		printf("\t\t[������Ϣ]\n");
		printf("����������,ѧ��,����,�绰,סַ:");
		scanf("%s%s%d%s%s", tempData.name, tempData.num,&tempData.age,tempData.tel, tempData.addr);
		inserNodefront(list, tempData);
		saveInfoFromFile("student.txt", list);
		break;
	case 2:
		printf("\t\t[�����Ϣ]\n");
		printList(list);
		break;
	case 3:
		printf("\t\t[ɾ����Ϣ]\n");
		printf("��ѡ��Ҫɾ����ѧ������:");
		scanf("%s", tempData.name);
		deleteNodebyAppointname(list, tempData.name);
		saveInfoFromFile("student.txt", list);
		break;
	case 4:
		printf("\t\t[�޸���Ϣ]\n");
		printf("������Ҫ�޸ĵ�ѧ����ѧ��:");
		scanf("%s", tempData.num);
		if (searchNodebyAppointnum(list, tempData.num) == NULL)
		{
			printf("δ�ҵ������Ϣ!\n");
		}
		else
		{
			struct Node* curNode = searchNodebyAppointnum(list, tempData.num);
			printf("�������µ�����,ѧ��,����,�绰,סַ:");
			scanf("%s%s%d%s%s", curNode->data.name,curNode->data.num, &curNode->data.age, curNode->data.tel, curNode->data.addr);
			saveInfoFromFile("student.txt", list);
		}
		break;
	case 5:
		printf("\t\t[������Ϣ]\n");
		printf("������Ҫ���ҵ�ѧ��:");
		scanf("%s", tempData.num);
		if (searchNodebyAppointnum(list, tempData.num) == NULL)
		{
			printf("δ�ҵ������Ϣ!\n");
		}
		else
		{
			printNode(searchNodebyAppointnum(list, tempData.num));
		}
		break;
	default:
		printf("�������!��������\n");
		break;
	}
}

int main()
{
	list = createList();
	readInfoFromFile("student.txt", list);
	while (1)
	{
		system_Menu();//���ò˵�
		KeyDown();
		system("pause");
		system("cls");
	}
	return 0;
}