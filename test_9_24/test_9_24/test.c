#define _CRT_SECURE_NO_WARNINGS 1c

////���˴��м�仯�Ĵ���
//#include <stdio.h>
//#include <string.h>
//#include <windows.h>
//#include <stdlib.h>
//int main()
//{
//	char arr1[] = "Welcome to China!!!";
//	char arr2[] = "###################";
//	int left = 0;
//	int right = strlen(arr1) - 1;
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		Sleep(1000);
//		system("cls");
//		left++;
//		right--;
//	}
//	printf("%s\n", arr2);
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	char arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 27;
//	int sz = sizeof(arr) / sizeof(arr[0]);//����Ԫ�ظ���
//	int left = 0;//���±�
//	int right = sz - 1;//���±�
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else if (arr[mid] < k) 
//		{
//			left= mid + 1;
//		}
//		else {
//			printf("�ҵ���,�±�:%d\n", mid);
//			break;
//		}
//	}
//		if (left > right) 
//		{
//			printf("�Ҳ�����\n");
//
//		}
//	return 0;
//}
////�׳˵ķ�������:��ϰ
//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	int n = 0;
//	int ret = 1;
//	int sum = 0;
//	/*scanf_s("%d", &n);*/
//	for (n = 1; n <= 10; n++)
//	{
//		ret = ret * n;
//		sum = sum + ret;
//	}
//	printf("sum=%d\n", sum);
//	return 0;
//}
////�׳˵ķ�������:
//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	int n = 0;
//	int ret = 1;
//	scanf_s("%d", &n);
//
//	for (i = 1; i <= n; i++) {
//		ret = ret * i;
//	}
//	printf("ret=%d\n", ret);
//	return 0;
//}

//int main()
//{
//	int n;
//	int i;
//	printf("������༶����\n");
//	scanf("%d", &n);
//	printf("������İ༶������%d\n", n);
//	printf("վ�ڵ�һ�е�ѧ���ı���ǣ�");
//	for (i = 1; i < n; i++)
//	{
//		if (i % 2 != 0) {
//			printf("%d ", i);		//��Ҫ���˿ո�			 
//		}
//	}
//	if (n % 2 != 0) {
//		printf("%d", n);				//��ĿҪ�����һ����ź����пո� 
//	}
//	printf(".");					//������һ����ź��Ƿ��пո� 
//	return 0;
//}
//#include<stdio.h>
//
//int main()
//{
//	int BJT;
//	int UTC;
//	printf("������BJT��");
//	scanf("%d", &BJT);
//	printf("�������ʱ��Ϊ��%d\n", BJT);
//	if (BJT > 0 && BJT < 2359) {									//�涨�����BJT��Χ������0-2359֮�� 
//		if (BJT < 800) {										//���ջ��� 
//			BJT += 2400;
//		}
//		UTC = BJT - 800;
//		printf("UTC=%d", UTC);
//	}
//	else printf("�������ʱ�䲻���ϸ�ʽ�����������롣");
//	return 0;
//}
//int main()
//{
//
//	for (int i = 10; i > 1; i /= 2) 
//	{
//		printf("%d ", i++);
//	}
//	return 0;
//}
//int main()
//{
//	int x;
//	int n = 0;
//
//	scanf_s("%d", &x);
//	/*n++;
//	x /= 10;*/
//	while (x > 0)
//	{
//		n++;
//		x /= 10;
//	}
//	printf("%d\n", n);
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int a = 123;
//	int b = a % 10;
//	int c = a % 100 / 10;
//	int d = a / 100;
//	int e = b * 100 + c * 10 + d;
//	printf("%d", e);
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int a = 712;
//	int b = a % 10;
//	int c = a/10%10;
//	int d = a/100;
//	int e = b * 100 + c * 10 + d;
//	printf("%d\n", e);
//	return 0;
//}
//int main()
//{
//	int price = 0;
//	printf("������һ�����(Ԫ):");
//	scanf("%d", &price);
//
//	int change = 100 - price;
//	printf("����%dԪ", change);
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	while (i <= 10)
//	{
//		printf("%d ", i);
//		i++;
//	}
//	return 0;
//}
//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) !=EOF)
//	{
//		putchar(ch);
//		/*printf("%c\n", ch);*/
//	}
//	return 0;
//}
//int main()
//{
//	int i = 1;
//	while(i<=100)
//	{
//		if (i % 2 == 0)
//			printf("%d ", i);
//		i++;
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int i = 1;
//	while (i <= 100)
//	{
//		if (i % 2 == 0)
//			printf("%d ", i);
//		i++;
//	}
//	return 0;
//}
//#include <stdio.h>
////int main()
////{
////	int i = 1;
////	while (i < +100)
////	{
////		if (i % 2 == 1)
////			printf("%d ", i);
////		i++;
////	}
////	return 0;
////}
//#include <stdio.h>
//int main()
//{
//	int i = 1;
//	while (i<=100)
//	{
//		if (i % 2 == 1)
//			printf("%d ", i);
//		i++;
//
//		
//	}
//return 0;
//}
//int main()
//{
//	short age = 30;
//	if (age < 18)
//		printf("δ����\n");
//	else if (age >= 18 && age < 28)
//		printf("����\n");
//	else
//		printf("������");
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	int b = 2;
//	if (a == 1)
//	{
//		if (b == 2)
//			printf("hehe\n");
//	}
//	else
//			printf("haha\n");
//	return 0;
//}
//#include <stdio.h>
//#include <string.h>
//struct Book
//{
//	char name[20];
//	short price;
//};
//int main()
//{
//	struct Book b1 = { "C���Գ������",50 };
//	strcpy(b1.name, "C++");
//	printf("%s\n", b1.name);
//	printf("%d\n", b1.price);
//	/*struct Book* pb = &b1;
//	printf("%s\n", pb->name);
//	printf("%d\n", pb->price);*/
//	return 0;
//}
////#include <stdio.h>
//struct Book
//{
//	char name[20];
//	short price;
//
//};
//int main()
//{
//	struct Book b1 = { "C���Գ������",60 };
//	struct Book* pb = &b1;
//	printf("%s\n", pb->name);
//	printf("%d\n", pb->price);
//	//printf("����:%s\n", b1.name);
//
//	///*printf("�۸�:%dԪ\n", b1.price);
//	//b1.price = 15;
//	//printf("�޸ĺ�ļ۸�:%d\n", b1.price);*/
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	printf("%d\n", sizeof(char*));
//	printf("%d\n", sizeof(short*));
//	printf("%d\n", sizeof(int*));
//	printf("%d\n", sizeof(double*));
//	return 0;
//}
/*i*//*nt main()
{
	unsigned short int a = 41883, a1, a2;
	printf("ԭֵa:%d---%#x\n", a, a);
	a1 = a << 1;
	a2 = a << 2;
	printf("����:a<<1=%d---%#x\n", a1, a1);
	printf("����:a<<2=%d---%#x\n", a2, a2);
	a1 = a >> 1;
	a2 = a >> 2;
	printf("����:a>>1=%d---%#x\n", a1, a1);
	printf("����:a>>2=%d---%#x\n", a2, a2);
	return 0;
}*/

//int Max(int x, int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}
//#define MAX(X,Y) (X>Y?X:Y)
//int main()
//{
//	int a = 30;
//	int b = 89;
//	int max = 0;
//	max = Max(a, b);
//	printf("max=%d\n", max);
//	max = MAX(a, b);
//	printf("max=%d\n", max);
////	return 0;
//}
//#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>
//int main()
//{
//	char input[20] = { 0 };
//	system("shutdown -s -t 60");
//	again:
//	printf("��ע����ĵ��Լ����ػ�,����ȡ��������:������˽�");
//	scanf("%s\n", input);
//	if (strcmp(input,"������˽�" ) == 0)
//	{
//		system("shutdown -a");
//	}
//	else
//	{
//		goto again;
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int a = 50;
//	int b = 60;
//	int max = 0;
//	max = (a > b ? a : b);
//	printf("max = % d\n",max);
//		return 0;
//}
//#include <stdio.h>
//int Add(int x, int y)
//{
//	int z = x + y;
//	return z;
//}
//int main()
//{
//	int a = 30;
//	int b = 50;
//	int sum = 0;
//	sum = Add(a, b);
//	printf("sum=%d\n", sum);
//	return 0;
//}
//int main()
//{
//	int a = 20;
//	int b = 50;
//	int max = 0;
//	max = (a > b ? a : b);
//	printf("%d\n", max);
//	return 0;
//}
//#include <stdio.h>
//int Max(int x, int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}
//int main()
//{
//	int num1 = 30;
//	int num2 = 50;
//	int max = 0;
//	max = Max(num1,num2);
//	printf("���ֵ:max=%d\n", max);
//	return 0;
//}
//#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>
//int main()
//{
//	char input[20] = { 0 };
//	system("shutdown -s -t 60");
//	again:
//	printf("��ע����ĵ��Լ����ػ�,����ȡ��������:������˽�");
//	scanf("%s", input);
//	if (strcmp(input, "������˽�") == 0)
//	{
//		system("shutdown -a");
//
//	}
//	else
//	{
//		goto again;
//	}
//	return 0;
//}

//#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>
//int main()
//{
//	char input[20] = { 0 };
//	system("shutdown -s -t 60");
//	again:
//	printf("��ע����ĵ��Լ����ػ�����ȡ���ػ�������:������˽�");
//	scanf("%s", input);
//	if (strcmp(input,"������˽�" )== 0)
//	{
//		system("shutdown -a");
//	}
//	else
//	{
//		goto again;
//	}
//return 0;
//}


//#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>
//int main()
//{
//	char input[20] = { 0 };
//	system("shutdown -s -t 60");
//again:
//	printf("��ע����ĵ��Լ����ػ���ֻ��һ���ӵ�ʱ������:������˽�");
//	scanf("%s", input);
//	if (strcmp(input, "������˽�") == 0)
//	{
//		system("shutdown -a");
//	}
//	else
//	{
//		goto again;
//	}
//	return 0;
//}


//int main()
//{
//	int arr[] = { 1,2,3,4,5,1,2,3,4 ,5,7};
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	for (i = 0; i < sz; i++)
//	{
//		int count = 0;
//		int j = 0;
//		for (j = 0; j < sz; j++)
//		{
//			if (arr[i] == arr[j])
//			{
//				count++;
//			}
//		}
//		if (count == 1)
//		{
//			printf("����:%d\n", arr[i]);
//			break;
//		}
//	}
//	return 0;
//}
//#include <limits.h>
//int main()
//{
//	int arr[] = { 1,2,3,4,5,1,2,3,4 ,5,7,1,};
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		int count = 0;
//		int j = 0;
//		for (j = 0; j < sz; j++)
//		{
//			if (arr[i] == arr[j])
//			{
//				count++;
//			}
//		}
//			if (count == 1)
//			{
//				printf("����:%d\n", arr[i]);
//				break;
//			}
//		}
//	return 0;
//}
//int main()
//{
//	int a = 3;
//	int b = 5;
//	printf("a=%d,b=%d\n", a, b);
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	/*a = a + b;
//	b = a - b;
//	a = a - b;*/
//	printf("a=%d,b=%d\n", a, b);
//}
//int main()
//{
//	int a = 3;
//	int b = 5;
//	int c = 0;
//	printf("a=%d,b=%d\n", a, b);
//	c = a;
//	a = b;
//	b = c;
//	printf("a=%d,b=%d\n", a, b);
//	return 0;
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	while (i < 10)
//	{
//		printf("%d\n", arr[i]);
//		i++;
//	}
//	return 0;
//}
//int Add(int x, int y)
//{
//	int z = x + y;
//	return z;
//}
//int main()
//{
//	int a = 100;
//	int b = 200;
//	int num1 = 10;
//	int num2 = 20;
//	int sum = 0;
//	sum = Add(a, b);
//	sum = Add(num1, num2);
//	printf("%d\n", sum);
//
//	return 0;
//}
////int main()
//{
//	printf("����ѧϰ��!\n");
//	int line = 0;
//	while (line<20000)
//	{
//		line++;
//		printf("��ҪŬ���ô���!\n");
//	}
//	if (line>=20000)
//		printf("ӭȢ�׸���\n");
//	return 0;
//}
//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	char arr1[] = "abc";
//	char arr2[] = {'a','b','c','\0'};
//	printf("%d\n", strlen(arr1));
//	printf("%d\n", strlen(arr2));
//
//	return 0;
//}
//#include <stdio.h>
//#include<windows.h>
//int main() {
//	for (float y = 1.5f; y > -1.5f; y -= 0.1f) {
//		for (float x = -1.5f; x < 1.5f; x += 0.05f) {
//			float a = x * x + y * y - 1;
//			putchar(a * a * a - x * x * y * y * y <= 0.0 ? '*' : '  ');
//		}
//		system("color 0c");
//		putchar('\n');
//	}
//	return 0;
//}

