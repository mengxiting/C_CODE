#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//void bubble_sort(int arr[], int sz)
//{
//	//确定冒泡排序的趟数
//	int z = 0;
//	for (z = 0; z < sz-1; z++)
//	{
//		int flag = 1;//假设这一趟排序的数据已经有序了		优化方法
//		//每一趟冒泡排序
//		int j = 0;
//		for (j = 0; j < sz - 1 - z; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//				flag = 0;//本次排序的数据其实不完全有序
//			}
//		}
//		if (flag == 1)
//		{
//			break;
//		}
//	}
//}
//int main()
//{
//	//冒泡(bubble)排序 升序
//	int i = 0;
//	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
//	//对arr进行升序
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr,sz);//冒泡排序函数
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ",arr[i]);
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	int arr[3][4] = { {1,2,3},{4,5} };			//二维数组
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 4; j++)
//		{
//			printf("&arr[%d][%d]=%p\n", i, j, &arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//#include<stdio.h>
//int count = 0;
//int Fib1(int n)
//{
//	if (n == 3)					//递归 此时不适合运算,重复的地方多
//	{
//		count++;//测试第三个斐波那契数的次数
//	}
//	if (n<= 2)
//		return 1;
//	else
//	{
//		return Fib(n - 1) + Fib(n - 2);
//	}
//}
//50
//49 48
//49 48 47
//47 46 45 44
//int Fib2(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	while (n > 2)
//	{
//		c = a + b;
//		a = b;    //没有重复运算了,速度快;
//		b = c;
//		n--;
//	}
//	return c;
//}
//int main()
//{
//	//斐波那契数   1 1 2 3 5 8 13 21 34....
//	//
//	//
//	//描述第n个斐波那契数
//	int n = 0;
//	int ret = 0;
//	scanf_s("%d", &n);
//	//TDD----测试驱动开发
//	ret = Fib2(n);
//	printf("ret=%d\n", ret);
//	/*printf("count=%d\n", count);*/
//}

//#include <stdio.h>
//int Fac1(int i)
//{
//	int n = 0;
//	int ret = 1;   //循环
//	for (n = 1; n <= i; n++)
//	{
//		ret *= n;
//	}
//	return ret;
//}
//int Fac2(int i) ////阶乘  递归
//{
//	if (i <= 1)
//		return 1;
//	else
//		return i * Fac2(i - 1);
//}
//int main()
//{
//	//求n的阶乘
//	int i = 0;
//	int ret = 0;
//	scanf_s("%d", &i);
//	ret = Fac2(i);//循环的方式
//	printf("%d\n", ret);
//	return 0;
//}

//int my_strlen(char* str)
//{
//	int count = 0;
//	while(*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
////要求无变量求出 字符串的长度
////使用递归的方法
////大事化小
////my_strlen("abc")
////1+my_strlen("bc")
////1+1+my_strlen("c")
////1+1+1+my_strlen("")
////1+1+1+0
//int my_strlen(char* arr)
//{
//	if (*arr != '\0')
//	{
//		arr = 1 + my_strlen(arr + 1);
//	}
//	else
//		return 0;
//}
//
//int main()
//{
//	//求字符串长度的函数
//	char arr[] = "abc";
//	/*int len = strlen(arr); //求字符串长度
//	printf("%d ", len);*/
//	//模拟求字符串长度,模拟一个strlen
//	int len = my_strlen(arr); //arr是数组,数组传参,传过去的不是整个数组,而是数组的一个元素的地址
//	printf("%d ", len);
//	return 0;
//}
//#include <stdio.h>			//递归的方法
//void print(int n)
//{
//	if (n > 9)
//	{
//		print(n / 10);
//	}
//	printf("%d ", n % 10);
//}
//int main()
//{
//	//递归
//	//1234表现为 1 2 3 4  一个无符号的整型按顺序打印出它的每一个值
//	unsigned int i = 0;
//	scanf_s("%d", &i);
//	print(i);
//   //print(1234)
//   //print(123) 4
//   //print(12) 3 4
//   //print(1) 2 3 4
//
//	return 0;
//}

//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//void menu()
//{
//	printf("***********************************\n");
//	printf("*******1.plat		0.exit*****\n");
//	printf("***********************************\n");
//}
//void game()
//{
//	//1.设置随机值
//	int ret = 0;
//	int guess = 0;//接收猜字数据
//	ret = rand() % 100 + 1;//设置1-100的随机值
//	//2.猜字环节
//	while (1)
//	{
//		printf("游戏开始,请猜数>:\n");
//		scanf("%d", &guess);
//		if (guess > ret)
//		{
//			printf("猜大了\n");
//		}
//		else if (guess < ret)
//		{
//			printf("猜小了\n");
//		}
//		else
//		{
//			printf("恭喜你,猜对了.\n");
//			break;
//		}
//	}
//}
//int main()
//{
//	//猜字游戏
//	int input = 0;
//	srand((unsigned int)time(NULL));
//	do
//	{
//		menu();
//		printf("请选择开始游戏>:");
//		scanf_s("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("退出游戏\n");
//			break;
//		default:
//			printf("选择错误\n");
//		}
//	} while (input);
//	return 0;
//}
//#include <stdio.h>  //猜字游戏exe
//#include <time.h>  //引用时间戳
//#include <stdlib.h>  //引用随机数(rand)
//void menu()
//{
//	printf("*************************************\n");
//	printf("******    1.play   0.exit    ********\n");
//	printf("*************************************\n");
//}
//void game()
//{   //Rand_Max--32767
//	//1.生成一个随机值;
//	int ret = 0;
//	int guess = 0;//接收猜数字的值
//	//拿时间戳来设置随机值的生成起始点;
//	// time_t time(time_t *timer)
//	// time_t
//	ret = rand()%100+1;//生成1-100随机数
//	//2.猜数字
//	while (1)
//	{
//		printf("请猜数字>:");
//		scanf_s("%d", &guess);
//		if (guess > ret) 
//		{
//			printf("猜大了\n");
//		}
//		else if (guess < ret) 
//		{
//			printf("猜小了\n");
//		}
//		else
//		{
//			printf("恭喜你,猜对了\n");
//			break;
//		}
//	}
//
//}
//int main()
//{
//	int input = 0;
// //	//拿时间戳来设置随机值的生成起始点;
//	srand((unsigned int)time(NULL));
//	do 
//	{
//		menu();
//		printf("请选择>:");
//		scanf_s("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();//猜字游戏开始
//			break;
//		case 0:
//			printf("退出游戏\n");
//			break;
//		default:
//			printf("选择错误\n");
//			break;
//		}
//	}while (input);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	printf("%d", printf("%d", printf("%d", 43)));//4321 printf()打印的是字符长度
//	return 0;
//}

//#include <stdio.h>
//void Add(int* p)
//{
//	(*p)++;
//}
//int main()
//{		//引用一次加1
//	int num = 0;
//	Add(&num);
//	printf("num=%d \n",num);
//	Add(&num);
//	printf("num=%d \n",num);
//	Add(&num);
//	printf("num=%d \n",num);
//}

//#include <stdio.h>
//int binary_search(char* arr, int k, int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//	return -1;
////
//}
//int main()
//{
//	//二分查找
//	//有顺序的一个数组里面查找
//	char arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 6;
//	int sz = sizeof(arr) / sizeof(arr[0]);////元素个数
//	int ret = binary_search(arr, k, sz);
//	//设定找到了,显示下标,找不到1
//	if (ret == -1)
//	{
//		printf("找不到了\n");
//	}
//	else
//	{
//		printf("找到了,下标为:%d\n", ret);
//	}
//	return 0;
//}

//#include <stdio.h>
//int is_leap_year(int y)
//{
//	if ((y % 4 == 0 && y % 100 != 0) || y % 400 == 0)
//		return 1;
//	else
//		return 0;
//}
//int main()
//{
//	//闰年:可以被四和四百整除 不可以被100整除
//	int year = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		  
//		if (1 == is_leap_year(year)) 
//		{
//			printf("%d ", year);
//		}
//	}
//	return 0;
//}


//#include <stdio.h>
//void swap(int* pa, int* pb)
//{
//	int tmp = 0;
//	tmp = *pa;
//	*pa = *pb;
//	*pb = tmp;
//}
//int main()												//取地址加指针与调用函数的用法
//{
//	int a = 20;
//	int b = 40;
//	printf("%d %d\n", a, b);
//	swap(&a, &b);  ////swap 交换
//	printf("%d %d\n", a, b);
//	return 0;
//}

//#include <stdio.h>
//#include <math.h>
////是素数 返回1 	不是素数 返回0
//int is_prime(int n)
//{
//	//2->n-1
//	int j = 0;
//	for (j = 2; j <=sqrt(n); j++)
//	{
//		if (n % j == 0)
//		{
//			return 0;
//		}
//		return 1;
//	}
//}
//int main()
//{		//判定一个数是否为素数
//	int i = 0;
//	//100 ---200 的素数
//	for (i = 100; i <= 200; i++) 
//	{
//		//判断i是否为素数
//		if (is_prime(i) == 1)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}

//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	//二分查找法   (对半查找法)
//	char arr[] = {1,2,3,4,5,6,7,8,9,10};
//	int k =13;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int left = 0;
//	int right = sz - 1;
//	while(left <= right) 
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] > k) 
//		{
//			right = mid  - 1;
//		}
//		else if (arr[mid] < k) 
//		{
//			left= mid + 1;
//		}
//		else
//		{
//			printf("找到了,下标为%d:",mid);
//			break;
//		}
//		if (left > right)
//		{
//			printf("找不到了");
//		}
//	
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	//乘法口诀表
//	int i = 0;
//	//打印九行
//	for (i = 1; i <= 9; i++) {
//		int j = 1;
//		//确定九列
//		for (j = 1; j <= i; j++) {
//			printf("%d*%d=%-2d ", i, j, i * j);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{																//乘法口诀表
//	int i = 0;
//	//打印九行
//	for (i = 1; i <=9; i++) {
//		int j = 1;
//		for (j = 1; j <= i; j++) {
//			printf("%d*%d=%-2d ", i, j, i * j);
//		}
//		printf("\n");
//	}
//	
//	return 0;
//}
//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	//求十个数中的最大值;
//	char arr[] = { -1,-2,-3,-4,-5,-6,-7,-8,-9,-10 };
//	int max = arr[0];
//	int i = 0;
//	/*int sz = sizeof(arr) / sizeof(arr[0]);*/
//	int sz = strlen(arr);
//	for (i = 1; i < sz; i++) {
//		if (max < arr[i])
//			max = arr[i];
//	}
//	printf("max=%d ", max);
//
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	//求1/1-1/2+1/3-1/4....+1/99-1/100相加的值
//	int i = 0;
//	double sum = 0.0;
//	int flag = 1;
//	for (i = 1; i <=100; i++) {
//		sum +=flag*1.0/i;
//		flag = -flag;
//	}
//	printf("%lf ", sum);
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	int count = 0;											//找出1-100里面有多少个9;
//	for (i = 1; i <= 100; i++) {
//		if (i % 10 == 9) {
//			count++;
//		}	//并列关系:两个if (99)
//		if (i / 10 == 9) {
//			count++;
//		}
//	}
//	printf("count:%d ", count);
//	return 0;
//}

//#include<stdio.h>
//#include <math.h>
//int main()
//{
//	int i = 0;
//	int count = 0;
//	//求0-100的素数(质数)
//	//sqrt--是一个开平方的数学库函数					//i=a*b 16=4*4=2*8 a和b其中一个数<=i的开平方
//*	for (i = 100; i <= 200; i++)*/ 
//	for(i=101;i<=200;i+=2)//一个特殊的偶数
//	{
//		//判读i是否为素数
//		//素数的判断规则
//		//1.试除法  (_三种方法)
//		//产生2->i-1     (13  2-12)
//		int j = 0;
//		/*for (j = 2; j <= i; j++)*/
//		for (j = 2; j <= sqrt(i); j++)
//		{
//			if (i % j == 0)
//			{
//				break;
//			}
//		}
//		/*if (j==i)*/
//		if(j>sqrt(i))
//		{
//			count++;
//			printf("%d ", i);
//		}
//	}
//	printf("\ncount=%d\n", count);
//	return 0;
//}

//int main()
//{
//	int year = 0;
//	int count = 0;
//	//求1000年-2000年中的闰年
//	for (year = 1000; year <= 2000; year++) {
//	//															//闰年的要求:
//	//															//1.可以被4整除,不可以被100整除的;
//	//	1.第一个方法											//2.可以被400整除
//	//	if (year % 4 == 0 && year % 100 != 0)
//	//	{
//	//		printf("%d ", year);
//	//		count++;
//	//	}
//	//	else if (year % 400 == 0) {
//	//		printf("%d ", year);
//	//		count++;
//	//	}
//		//
//		///2.第二个方法
//	if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
//	{
//		printf("%d ", year);
//		count++;
//		//
//		//
//	}
//	}
//	printf("\ncount=%d\n", count);
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int a = 24;
//	int b = 18;
//	int r = 0;
//	scanf("%d%d",&a,&b);									//最大公约数的公式
//															//辗转相除法
//	while (a % b)
//	{
//		r = a % b;
//		a = b;
//		b = r;
//	}
//	printf("%d\n", r);
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 100; i++) {							//三的倍数函数
//		if (i % 3 == 0) {
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}
//#include <stdio.h>
//i/*nt main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	printf("请输入三个值:");
//	scanf_s("%d%d%d", &a, &b, &c);
//	if (a < b)
//	{
//		int tmp = a;
//		a = b;													//从大到小自动排列
//		b = tmp;
//	}
//	if (a < c)
//	{
//		int tmp= a;
//		a = c;
//		c = tmp;
//	}
//	if (b < c)
//	{
//		int tmp = b;
//		b = c;
//		c = tmp;
//	}
//
//	printf("%d %d %d\n", a, b, c);
//	return 0;*/
//}

	//#include <stdio.h>
	//#include <string.h>
	//int main()
	//{
	//	int i = 0;
	//	char password[20] = { 0 };
	//	for (i = 0; i <3; i++)
	//	{
	//		printf("请输入密码:");
	//		scanf("%s", password);
	//		if (strcmp(password, "123456") == 0)						//密码程序
	//		{
	//			printf("密码正确\n");
	//			break;
	//		}
	//		else
	//		{
	//			printf("密码错误\n");
	//		}
	//	}
	//	if (i == 3) 
	//	{
	//		printf("密码错误三次,请退出\n");
	//	}
	//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	int n = 0;
//	int ret = 1;
//	int sum = 0;
//	for (n = 1; n <= 10; n++) {									//阶乘公式
//																//阶乘相加公式
//		ret = ret * n;
//		sum = sum + ret;
//	}
//	printf("%d\n", sum);
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	char arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int left = 0;
//	int right = sz- 1;
//	while (left <= right)
//	{
//		int mid = (right + left) / 2;
//		if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else if (arr[mid] < k)												//找出某个元素的代码
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			printf("恭喜你,找到了,下标为:%d\n", mid);
//			break;
//		}
//		if (left > right)
//		{
//			printf("抱歉目标无法找不到\n");
//
//		}
//	}
//	return 0;
//}
//#include <stdio.h>
//#include <string.h>
//#include <windows.h>
//int main()
//{
//	char arr1[] = "Welcome to China!!!!!";
//	char arr2[] = "#####################";
//	int left = 0;
//	int right = strlen(arr1) - 1;							//从两边向中间变化的代码
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		Sleep(1000);
//		left++;
//		right--;
//	}
//	return 0;
//}