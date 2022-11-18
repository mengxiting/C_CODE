#define _CRT_SECURE_NO_WARNINGS 1c

////两端从中间变化的代码
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
//	int sz = sizeof(arr) / sizeof(arr[0]);//计算元素个数
//	int left = 0;//左下标
//	int right = sz - 1;//右下标
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
//			printf("找到了,下标:%d\n", mid);
//			break;
//		}
//	}
//		if (left > right) 
//		{
//			printf("找不到了\n");
//
//		}
//	return 0;
//}
////阶乘的方法如下:练习
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
////阶乘的方法如下:
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
//	printf("请输入班级人数\n");
//	scanf("%d", &n);
//	printf("您输入的班级人数是%d\n", n);
//	printf("站在第一列的学生的编号是：");
//	for (i = 1; i < n; i++)
//	{
//		if (i % 2 != 0) {
//			printf("%d ", i);		//不要忘了空格			 
//		}
//	}
//	if (n % 2 != 0) {
//		printf("%d", n);				//题目要求最后一个编号后不能有空格 
//	}
//	printf(".");					//检测最后一个编号后是否有空格 
//	return 0;
//}
//#include<stdio.h>
//
//int main()
//{
//	int BJT;
//	int UTC;
//	printf("请输入BJT：");
//	scanf("%d", &BJT);
//	printf("您输入的时间为：%d\n", BJT);
//	if (BJT > 0 && BJT < 2359) {									//规定输入的BJT范围必须在0-2359之间 
//		if (BJT < 800) {										//跨日换算 
//			BJT += 2400;
//		}
//		UTC = BJT - 800;
//		printf("UTC=%d", UTC);
//	}
//	else printf("您输入的时间不符合格式，请重新输入。");
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
//	printf("请输入一个金额(元):");
//	scanf("%d", &price);
//
//	int change = 100 - price;
//	printf("找您%d元", change);
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
//		printf("未成年\n");
//	else if (age >= 18 && age < 28)
//		printf("青年\n");
//	else
//		printf("中年人");
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
//	struct Book b1 = { "C语言程序设计",50 };
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
//	struct Book b1 = { "C语言程序设计",60 };
//	struct Book* pb = &b1;
//	printf("%s\n", pb->name);
//	printf("%d\n", pb->price);
//	//printf("书名:%s\n", b1.name);
//
//	///*printf("价格:%d元\n", b1.price);
//	//b1.price = 15;
//	//printf("修改后的价格:%d\n", b1.price);*/
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
	printf("原值a:%d---%#x\n", a, a);
	a1 = a << 1;
	a2 = a << 2;
	printf("左移:a<<1=%d---%#x\n", a1, a1);
	printf("左移:a<<2=%d---%#x\n", a2, a2);
	a1 = a >> 1;
	a2 = a >> 2;
	printf("右移:a>>1=%d---%#x\n", a1, a1);
	printf("右移:a>>2=%d---%#x\n", a2, a2);
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
//	printf("请注意你的电脑即将关机,若想取消请输入:我是猪八戒");
//	scanf("%s\n", input);
//	if (strcmp(input,"我是猪八戒" ) == 0)
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
//	printf("最大值:max=%d\n", max);
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
//	printf("请注意你的电脑即将关机,如想取消请输入:我是猪八戒");
//	scanf("%s", input);
//	if (strcmp(input, "我是猪八戒") == 0)
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
//	printf("请注意你的电脑即将关机如想取消关机请输入:我是猪八戒");
//	scanf("%s", input);
//	if (strcmp(input,"我是猪八戒" )== 0)
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
//	printf("请注意你的电脑即将关机你只有一分钟的时间输入:我是猪八戒");
//	scanf("%s", input);
//	if (strcmp(input, "我是猪八戒") == 0)
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
//			printf("单身狗:%d\n", arr[i]);
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
//				printf("单身狗:%d\n", arr[i]);
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
//	printf("加入学习吧!\n");
//	int line = 0;
//	while (line<20000)
//	{
//		line++;
//		printf("我要努力敲代码!\n");
//	}
//	if (line>=20000)
//		printf("迎娶白富美\n");
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

