#define _CRT_SECURE_NO_WARNINGS 1

//#include <stdio.h>
//int main()
//{
// //在屏幕上输出文本信息"Good Morning!".
//	printf("Good Morning!");		//第一个程序
//	return 0;
//}

//#include <stdio.h>

//int main()
//{
// //编写一个程序,并计算两数的和
//	int a, b, sum;
//	a = 21;
//	b = 34;
//	sum = a + b;			//通过sum实现a,b的加法
//	printf("%d", sum);
//	return 0;
//}

//#include <stdio.h>
//
//int fnMax(int x, int y)
//{
//	int z;
//	if (x > y)
//		z = x;
//	else
//		z = y;
//	return z;
//}
//int main()
//{
//	//求两个整数中的较大值并输出
//	int a, b, c;
//	printf("请输入2个整数:");
//	scanf("%d%d", &a, &b);
//	c = fnMax(a, b);
//	printf("%d", c);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	//求两数相加的数
//	int a, b, sum;
//	printf("请从键盘输入2个整数:");
//	scanf("%d%d", &a, &b);
//	sum = a + b;
//	printf("%d+%d=%d", a, b, sum);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	//输入三个整数,找出最大值
//	int num1, num2, num3;
//	printf("请输入三个整数:");
//	scanf("%d%d%d", &num1, &num2, &num3);
//	int max;
//	max = num1;
//	if (max < num2)
//		max = num2;
//	if (max < num3)
//		max = num3;
//	printf("max=%d", max);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	//1+2+....+36=666
//	int i = 0;
//	int iSum = 0;
//	for (i = 1; i <= 36; i++)
//	{
//		iSum += i;
//	}
//	printf("Sum=%d", iSum);
//	return 0;
//} 

//#include <stdio.h>
//int main()
//{
// //1-100的奇数之和;
//	int i = 0;
//	int iSum = 0;
//	for (i = 1; i < 100; i += 2)
//	{
//		iSum += i;
//		printf("i=%d", i);
//	}
//	printf("sum=%d", iSum);
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	//打印1-100的素数的之和
//	int k=1,i;
//	int isum = 0;
//	for (k = 1; k < 100; k++)
//	{
//		for (i = 2; i < k; i++)
//		{
//			if (k % i == 0)
//				break;
//		}
//		if (k == i)
//		{
//			isum += k;
//			printf("k=%d\n", k);
//		}
//	}
//	printf("isum=%d", isum);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
// //求最小值
//	int a, b;
//	int min;
//	printf("请输入两个整数:");
//	scanf("%d%d", &a, &b);
//	min = (a > b ? b : a);
//	printf("min=%d", min);
//}


//#include <stdio.h>
//int main()
//{
// //字符型和整型数据通用
//	int c1, c2;
//	c1 = 'a';
//	c2 = 97;
//	printf("c1=%c,c2=%c\n", c1, c2);
//	printf("c1=%d,c2=%d\n", c1, c2);
//}

//#include <stdio.h>
//int main()
//{
// //个位 和  十位  分离
//	int i = 39;
//	int g, s;
//	g = i % 10;
//	s = i / 10;
//	printf("s=%d,g=%d", s, g);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int a, b;
//	printf("请输入两个数:");
//	scanf("%d%d", &a, &b);//0011 0101
//	printf("%d,%d", a & b, a | b);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	//输入秒,按小时,分,秒输出
//	int m,h,f,m2;
//	scanf("%d", &m);
//	h = m / 3600;
//	f = m % 3600/60;
//	m2 = m % 3600 % 60;
//	printf("%d小时%d分%d秒", h, f, m2);
//}

//#include <stdio.h>
//int main()
//{
//	int num,num2=0;
//	int q, b, s, g;
//	printf("请输入一个4位数正整数:");
//	scanf("%d", &num);
//	q = num / 1000;
//	b = num % 1000 / 100;
//	s = num % 1000 % 100 / 10;
//	g = num % 1000 % 100 % 10;
//	num2 = g * 1000 + s * 100 + b * 10 + q;
//	printf("num1=%d,num2=%d\n", num, num2);
//}

//#include <stdio.h>
//int main()
//{
//	int salary;
//	int n1, n2, n3,n4;
//	printf("请输入工资:");
//	scanf("%d", &salary);
//	n1 = salary / 50;
//	n2 = salary % 50 / 20;
//	n3 = salary % 50 % 20;
//	n4 = n1 + n2 + n3;
//	printf("50元=%d,20元=%d,1元=%d,张数=%d\n", n1, n2, n3, n4);
//}

//#include <stdio.h>
//int main()
//{
//	char a = 4;
//	printf("%d\n", a = a - 1);
//}
//#include <stdio.h>
//int main()
//{
//	int x = 12;
//	double y = 3.141593;
//	printf("%d%8.6f", x, y);
//}

//#include <stdio.h>
//int main()
//{
//	//输入一个整数,截取底八位
//	int num;
//	int i = 0;
//	scanf("%d", &num);
//	printf("%#x",num & 0xff);
//}

//#include <stdio.h>
//int main()
//{
//	//请输入一个数,判断是否为3 的倍数
//	int count = 0;
//	printf("请输入一个整数:");
//	scanf("%d", &count);
//	if (count % 3 == 0)
//		printf("该数为3的倍数");
//	else
//		printf("不是3的倍数");
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	//输入两个整数,判断其较大值输出
//	int a, b;
//	int max;
//	printf("请输入两个整数:");
//	scanf("%d%d", &a, &b);
//	if (a > b)
//		printf("较大值:%d", a);
//	else
//		printf("较大值%d", b);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int i, j;
//	for (i = 0; i < 10; i++)
//	{
//		j = i * 10 + 6;
//		if (j % 3 != 0)
//			continue;
//		printf("%d\n", j);
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	//输入一个正整数,然后输出该整数的所有因子;
//	unsigned int num;
//	int i=0;
//	printf("请输入一个正整数:");
//	scanf("%d", &num);
//	for (i = 1; i <= num; i++)
//	{
//		if (num % i ==0)
//		{
//			printf("%d\n", num/i);
//		}
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	//找出"完全数",例如,6的因子是1,2,3,而6=1+2+3.因此6就是完全数,找出1000之内的完全数
//	int num,isum,j;
//	j = 0;
//	num = 0;
//	for (num = 2; num <= 1000; num++)//
//	{
//		isum = 0;
//		for (j = 1; j < num; j++)
//		{
//			if (num % j == 0)
//			{
//				isum += j;
//			}
//		}
//		if (isum == num)
//		{
//			printf("完全数:%d\n", num);//6 
//		}
//	}
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	//输出整数的所有因子
//	int i = 1,j=1;
//	printf("请输入一个整数:");
//	scanf("%d", &i);
//	while (j <= i)
//	{
//		if (i % j == 0)
//		{
//			printf("%d 是因子\n", j);
//		}
//		j++;
//	}
//}

//#include <stdio.h>
//
//int compNum(int m)
//{
//	int n;
//	int sum = 0;
//	for (n = 1; n < m; n++)
//	{
//		if (m % n == 0)
//		{
//			sum += n;
//		}
//	}
//	if (m == sum)
//	{
//		return 1;
//	}
//	else
//		return 0;
//}
//int main()
//{
//	//找出1000以内的完全数
//	int compNum(int m);
//	int i;
//	for (i = 1; i < 1000; i++)
//	{
//		if (compNum(i))
//		{
//			printf("%d 是完全数\n", i);
//		}
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	//求最大公约数,最小公倍数
//	int m, n;
//	int r = 0;
//	int g = 0;
//	int b = 0;
//	printf("请输入两个正整数:");
//	scanf("%d%d", &m, &n);
//	g = m * n;
//	while (m % n != 0)
//	{
//		r = m % n;
//		m = n;
//		n = r;
//	}
//	b = g / n;
//	printf("最大公约数:%d\n", n);
//	printf("最小公倍数:%d\n", b);
//}

//#include <stdio.h>
//int main()
//{
//	//打印所有的水仙花数,水仙花数是指一个三位数,其个位数字等于该数的立方和
//	int h,num;
//	int g = 0;
//	int s = 0;
//	int b = 0;
//	int sum = 0;
//	for (num = 100; num < 1000; num++)
//	{
//		g = num%10;
//		s = num/10%10;
//		b = num/100;
//		sum = g + s*10 + b*100;
//		if(sum==g*g*g+s*s*s+b*b*b)
//		printf("%d 是水仙花数\n", sum);
//
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	/*求等式xyz+yzz=532.编程求x,y,z的值(其中xyz 和 yzz 分别是一个三位数;*/
//	int x = 0, y = 0, z = 0;
//	int sum = 0,sum1=0,sum2=0;
//	/*x*y*z+y*z*z=532  1000>x*y*z>100	 1000>y*z*z>100*/
//	for (x = 0; x < 10; x++)
//	{
//		for (y = 0; y < 10; y++)
//		{
//			for (z = 0; z < 10; z++)
//			{
//				sum = x * 100 + y * 10 + z + y * 100 + z * 10 + z;
//				if (sum == 532)
//					printf("x=%d y=%d z=%d", x, y, z);
//			}
//		}
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	//将整钱换成零钱,那么壹元钱可换成壹角,贰角或者伍角,有多少种方法
//	int count = 0;
//	int y,e,w,yuan=10;
//	for (y = 0; y <= 10; y++)
//	{
//		for (e = 0; e <= 10; e+=2)
//		{
//			for (w = 0; w <= 10; w+=5)
//			{
//				if (y + e + w == yuan)
//				{
//					count++;
//				}
//			}
//		}
//	}
//	printf("count=%d\n", count);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
////	五个猴子分桃,第一猴子把这份桃子平均分成五份,多了一个,多的一个扔掉拿走一份,直到第五只猴子,请问海滩原来最少有多少个桃子;
////	 	(n-1)-(n-1)/5   =  4(n-1)/5    
//	 
//	int i;
//	int sum = 0;//桃子个数
//	for (int i = 1;; i++)
//	{
//		int sum = i;
//		if ((sum - 1) % 5 == 0) 
//		{ //保证第一次分
//			sum = (sum - 1) / 5 * 4;
//			if ((sum - 1) % 5 == 0)
//			{ //保证第二次分
//				sum = (sum - 1) / 5 * 4;
//				if ((sum - 1) % 5 == 0) 
//				{ //保证第三次分
//					sum = (sum - 1) / 5 * 4;
//					if ((sum - 1) % 5 == 0)
//					{ //保证第四次分
//						sum = (sum - 1) / 5 * 4;
//						if ((sum - 1) % 5 == 0) 
//						{  //保证第五次分
//							printf("海滩上至少有:%d个\n", i);
//							break;
//						}
//					}
//				}
//			}
//		}
//	}
//}

//#include <stdio.h>
//int main()
//{
//	for (int i = 1;; i++)
//	{
//		int sum = i;
//		for (int j = 0; j < 5; j++)
//		{
//			if (sum % 5 != 1)
//			{
//				break;
//			}
//			sum = (sum - 1) / 5 * 4;
//			if (j == 4)
//			{
//				printf("%d\n", i);
//				return;
//			}
//		}
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	//利用循环达到 strlen 的效果 计算字符串长度
//	char str[] = "I am a student!";
//	int i;
//	int count = 0;
//	for (i = 0; str[i] != '\0'; i++)
//	{
//		count++;
//	}
//	printf("count=%d", count);
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	//利用循环达到 strcpy 的效果 复制字符串
//	char str[80] = "I am a student!";
//	char str1[80]="'\0'";
//	int i;
//	int count = 0;
//	for (i = 0; str[i] != '\0'; i++)
//	{
//		str1[i] = str[i];
//	}
//	printf("str1=\n%s\n", str1);
//	return 0;
//}
#include<stdio.h>
int strlen(char str[])
{
    int i;
    int count=0;
    for (i = 0; str[i] != 0; i++)
    {
        count++;
    }
    return count;
}
//int main()
//{
//    //不使用strcat 达到连接字符串的效果
//    char a[100];
//    char b[100];
//    int i, j, l1, l2;
//    printf("输入第一个字符串：");
//    gets(a);
//    printf("输入第二个字符串：");
//    gets(b);
//    l1 = strlen(a);
//    l2 = strlen(b);
//    for (i = 0; b[i] != '\0'; i++) {
//        a[i + l1] = b[i];
//    }
//    a[l1 + l2] = '\0';
//    printf("连接后的字符串为：\n");
//    puts(a);
//}

//#include <stdio.h>
//int main()
//{
//	//求出Fibonacci 数列的前二十项并储存在数组中,按每行五个输出
//	//20项 F1 =1 F2 =1 ........ Fn=Fn-1+Fn-2;
//	int i;
//	int arr[20];
//	for (i = 0; i < 20; i++)
//	{
//		if (i < 2) {
//			arr[i] = 1;
//		}
//		else
//		{
//			arr[i] = arr[i - 1] + arr[i - 2];
//			if (i % 5 == 0)
//			{
//				printf("\n");
//			}
//		}
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int iA[10];
//	int i;
//	printf("请输入十个整数:\n");
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", &iA[i]);
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", iA[i]);
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	//输入十个整数找出其最小数
//	int iArr[10];
//	int i;
//	int min;
//	printf("请输入十个整数:\n");
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", &iArr[i]);
//		min = iArr[0];
//	}
//	for (i = 0; i < 10; i++)
//	{	
//		if (min > iArr[i])
//		{
//			min = iArr[i];
//		}
//	}
//	printf("min=%d ", min);
//	return 0;
//}

//#include <stdio.h>
//int jiecheng(int n)
//{
//	int i;
//	int ret = 1;
//	for (i = 1; i <= n; i++)
//	{
//		ret *= i;
//	}
//	return ret;
//}
//int main()
//{
//	//求阶乘n (n<6)
//	int n;
//	scanf("%d", &n);
//	jiecheng(n);
//	printf("n=%d\n", jiecheng(n));
//	return 0;
//}

