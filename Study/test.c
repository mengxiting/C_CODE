#define _CRT_SECURE_NO_WARNINGS 1

//#include <stdio.h>
//int main()
//{
// //����Ļ������ı���Ϣ"Good Morning!".
//	printf("Good Morning!");		//��һ������
//	return 0;
//}

//#include <stdio.h>

//int main()
//{
// //��дһ������,�����������ĺ�
//	int a, b, sum;
//	a = 21;
//	b = 34;
//	sum = a + b;			//ͨ��sumʵ��a,b�ļӷ�
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
//	//�����������еĽϴ�ֵ�����
//	int a, b, c;
//	printf("������2������:");
//	scanf("%d%d", &a, &b);
//	c = fnMax(a, b);
//	printf("%d", c);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	//��������ӵ���
//	int a, b, sum;
//	printf("��Ӽ�������2������:");
//	scanf("%d%d", &a, &b);
//	sum = a + b;
//	printf("%d+%d=%d", a, b, sum);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	//������������,�ҳ����ֵ
//	int num1, num2, num3;
//	printf("��������������:");
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
// //1-100������֮��;
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
//	//��ӡ1-100��������֮��
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
// //����Сֵ
//	int a, b;
//	int min;
//	printf("��������������:");
//	scanf("%d%d", &a, &b);
//	min = (a > b ? b : a);
//	printf("min=%d", min);
//}


//#include <stdio.h>
//int main()
//{
// //�ַ��ͺ���������ͨ��
//	int c1, c2;
//	c1 = 'a';
//	c2 = 97;
//	printf("c1=%c,c2=%c\n", c1, c2);
//	printf("c1=%d,c2=%d\n", c1, c2);
//}

//#include <stdio.h>
//int main()
//{
// //��λ ��  ʮλ  ����
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
//	printf("������������:");
//	scanf("%d%d", &a, &b);//0011 0101
//	printf("%d,%d", a & b, a | b);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	//������,��Сʱ,��,�����
//	int m,h,f,m2;
//	scanf("%d", &m);
//	h = m / 3600;
//	f = m % 3600/60;
//	m2 = m % 3600 % 60;
//	printf("%dСʱ%d��%d��", h, f, m2);
//}

//#include <stdio.h>
//int main()
//{
//	int num,num2=0;
//	int q, b, s, g;
//	printf("������һ��4λ��������:");
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
//	printf("�����빤��:");
//	scanf("%d", &salary);
//	n1 = salary / 50;
//	n2 = salary % 50 / 20;
//	n3 = salary % 50 % 20;
//	n4 = n1 + n2 + n3;
//	printf("50Ԫ=%d,20Ԫ=%d,1Ԫ=%d,����=%d\n", n1, n2, n3, n4);
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
//	//����һ������,��ȡ�װ�λ
//	int num;
//	int i = 0;
//	scanf("%d", &num);
//	printf("%#x",num & 0xff);
//}

//#include <stdio.h>
//int main()
//{
//	//������һ����,�ж��Ƿ�Ϊ3 �ı���
//	int count = 0;
//	printf("������һ������:");
//	scanf("%d", &count);
//	if (count % 3 == 0)
//		printf("����Ϊ3�ı���");
//	else
//		printf("����3�ı���");
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	//������������,�ж���ϴ�ֵ���
//	int a, b;
//	int max;
//	printf("��������������:");
//	scanf("%d%d", &a, &b);
//	if (a > b)
//		printf("�ϴ�ֵ:%d", a);
//	else
//		printf("�ϴ�ֵ%d", b);
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
//	//����һ��������,Ȼ���������������������;
//	unsigned int num;
//	int i=0;
//	printf("������һ��������:");
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
//	//�ҳ�"��ȫ��",����,6��������1,2,3,��6=1+2+3.���6������ȫ��,�ҳ�1000֮�ڵ���ȫ��
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
//			printf("��ȫ��:%d\n", num);//6 
//		}
//	}
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	//�����������������
//	int i = 1,j=1;
//	printf("������һ������:");
//	scanf("%d", &i);
//	while (j <= i)
//	{
//		if (i % j == 0)
//		{
//			printf("%d ������\n", j);
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
//	//�ҳ�1000���ڵ���ȫ��
//	int compNum(int m);
//	int i;
//	for (i = 1; i < 1000; i++)
//	{
//		if (compNum(i))
//		{
//			printf("%d ����ȫ��\n", i);
//		}
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	//�����Լ��,��С������
//	int m, n;
//	int r = 0;
//	int g = 0;
//	int b = 0;
//	printf("����������������:");
//	scanf("%d%d", &m, &n);
//	g = m * n;
//	while (m % n != 0)
//	{
//		r = m % n;
//		m = n;
//		n = r;
//	}
//	b = g / n;
//	printf("���Լ��:%d\n", n);
//	printf("��С������:%d\n", b);
//}

//#include <stdio.h>
//int main()
//{
//	//��ӡ���е�ˮ�ɻ���,ˮ�ɻ�����ָһ����λ��,���λ���ֵ��ڸ�����������
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
//		printf("%d ��ˮ�ɻ���\n", sum);
//
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	/*���ʽxyz+yzz=532.�����x,y,z��ֵ(����xyz �� yzz �ֱ���һ����λ��;*/
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
//	//����Ǯ������Ǯ,��ôҼԪǮ�ɻ���Ҽ��,���ǻ������,�ж����ַ���
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
////	������ӷ���,��һ���Ӱ��������ƽ���ֳ����,����һ��,���һ���ӵ�����һ��,ֱ������ֻ����,���ʺ�̲ԭ�������ж��ٸ�����;
////	 	(n-1)-(n-1)/5   =  4(n-1)/5    
//	 
//	int i;
//	int sum = 0;//���Ӹ���
//	for (int i = 1;; i++)
//	{
//		int sum = i;
//		if ((sum - 1) % 5 == 0) 
//		{ //��֤��һ�η�
//			sum = (sum - 1) / 5 * 4;
//			if ((sum - 1) % 5 == 0)
//			{ //��֤�ڶ��η�
//				sum = (sum - 1) / 5 * 4;
//				if ((sum - 1) % 5 == 0) 
//				{ //��֤�����η�
//					sum = (sum - 1) / 5 * 4;
//					if ((sum - 1) % 5 == 0)
//					{ //��֤���Ĵη�
//						sum = (sum - 1) / 5 * 4;
//						if ((sum - 1) % 5 == 0) 
//						{  //��֤����η�
//							printf("��̲��������:%d��\n", i);
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
//	//����ѭ���ﵽ strlen ��Ч�� �����ַ�������
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
//	//����ѭ���ﵽ strcpy ��Ч�� �����ַ���
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
//    //��ʹ��strcat �ﵽ�����ַ�����Ч��
//    char a[100];
//    char b[100];
//    int i, j, l1, l2;
//    printf("�����һ���ַ�����");
//    gets(a);
//    printf("����ڶ����ַ�����");
//    gets(b);
//    l1 = strlen(a);
//    l2 = strlen(b);
//    for (i = 0; b[i] != '\0'; i++) {
//        a[i + l1] = b[i];
//    }
//    a[l1 + l2] = '\0';
//    printf("���Ӻ���ַ���Ϊ��\n");
//    puts(a);
//}

//#include <stdio.h>
//int main()
//{
//	//���Fibonacci ���е�ǰ��ʮ�������������,��ÿ��������
//	//20�� F1 =1 F2 =1 ........ Fn=Fn-1+Fn-2;
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
//	printf("������ʮ������:\n");
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
//	//����ʮ�������ҳ�����С��
//	int iArr[10];
//	int i;
//	int min;
//	printf("������ʮ������:\n");
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
//	//��׳�n (n<6)
//	int n;
//	scanf("%d", &n);
//	jiecheng(n);
//	printf("n=%d\n", jiecheng(n));
//	return 0;
//}

