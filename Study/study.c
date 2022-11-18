#define _CRT_SECURE_NO_WARNINGS 1

//#include<stdio.h>
//int main()
//{
//	int i, j, s, n; /*变量i控制选定数范围，j控制除数范围，s记录累加因子之和*/
//	printf("请输入所选范围上限：");
//	scanf("%d", &n); /* n的值由键盘输入*/
//	for (i = 2; i <= n; i++)
//	{
//		s = 0; /*保证每次循环时s的初值为0*/
//		for (j = 1; j < i; j++)
//		{
//			if (i % j == 0) /*判断j是否为i的因子*/
//				s += j;
//		}
//		if (s == i) /*判断因子这和是否和原数相等*/
//			printf("It's a perfect number:%d\n", i);
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	//用1,2,3,4四位数组成一个三位数
//	//要求不能重复,并统计有多少三位数;
//	int b, s, g;
//	int sum = 0;
//	int count = 0;
//	for (b = 1; b < 5; b++)
//	{
//		for (s = 1; s < 5; s++)																//思路:如何构造一个三位数		b*100+s*10+g--三位数
//		{																					//利用循环将百位|十位|个位 从1到4一一打印出来
//			for (g = 1; g < 5; g++)
//			{
//				if (b != s && s != g && b != g)
//				{
//					sum = b * 100 + s * 10 + g;
//					printf("%d\n", sum);
//					count++;
//				}
//			}
//		}
//	}
//	printf("count= %d\n", count);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{//用*写一个c
//	int m = 5;
//	int i;
//	for (i = 0; i < m; i++)
//	{
//		printf("*");
//	}
//	printf("\n");
//	for (i = 0; i < m-1; i++)
//	{
//		printf("*\n");
//	}
//	for (i = 0; i < m; i++)
//	{
//		printf("*");
//	}
//	printf("\n");
//
//	return 0;
//}

//#include<stdio.h>
//int main()
//{	//九九乘法表
//	int i, j;
//	for (i = 1; i <= 9; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%-2d  ", i, j, i * j);
//		}
//		printf("\n");
//	}
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	//斐波那契数列
//	int i = 1;
//	int j = 1;
//	int s;
//	for (s = 1; s <= 10; s++)
//	{
//		printf("%d,%d ", i, j);
//		if (s % 2 == 0)
//			printf("\n");
//		i = i + j;
//		j = i + j;
//	}
//	return 0;
//}

//#include <stdio.h>
//#include <math.h>
//int main()
//{
//	//判断是否为素数,打印101-200的素数
//	int i, k;
//	for (k = 101; k <= 200; k++)
//	{
//		for (i = 2; i <= sqrt(k); i++)
//		{
//			if (k % i == 0)
//				break;
//		}
//		if (i > sqrt(k))
//			printf("%d\n", k);
//	}
//	return 0;
//}

//#include <stdio.h>
//#include <math.h>
//
//int num(int m)
//{
//	int i;
//	int k = (int)sqrt((double)m);
//	for (i = 2; i <= k; i++)
//	{
//		if (m % i == 0)
//			break;
//	}
//	if (k < i)
//	{
//		return 1;
//		printf("%d 是素数");
//	}
//	else
//	{
//		return 0;
//		printf("%d 不是素数");
//	}
//}
//int main()
//{
//	//判断是否为素数,打印101-200的素数
//	int i, k;
//	for (k = 101; k <= 200; k++)
//	{
//		if (num(k))
//			printf("%d ", k);
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	//求水仙花数1000以内	水仙花数为一个数等于它的每位数的立方和
//	//153   153 = 1^3+5^3+3^3;
//	int g=0, s=0, b=0;
//	int i = 0;
//	for (b = 1; b < 10; b++)
//	{
//		for (s = 0; s < 10; s++)														//重复多次   不建议	
//		{
//			for (g = 0; g < 10; g++)
//			{
//				i = g + s * 10 + b * 100;
//				if ( i == (g * g * g + s * s * s + b * b * b))
//				{
//					printf("%d 是水仙花数", i);
//				}
//			}
//		}
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	//求水仙花数1000以内  求三位数的水仙花数	水仙花数为一个数等于它的每位数的立方和
//	//153   153 = 1^3+5^3+3^3;
//	int g = 0, s = 0, b = 0;
//	int i = 0;
//	for (i = 100; i < 1000; i++)
//	{
//		g = i % 10;	//求出个位数  
//		s = i / 10 % 10;  //求出十位数
//		b = i / 100;	//求出百位数
//		if (i == g * g * g + s * s * s + b * b * b)
//		{
//			printf("%d 是水仙花数\n", i);
//		}
//	}
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	//输入一个正整数分解质因数, 例如 输入90  输出90=2*3*3*5;
//
//	int m = 45;
//	int i;
//	printf("%d=", m);
//	for (i = 2; i <= m; i++)
//	{
//		while (m % i == 0)
//		{
//			printf("%d", i);
//			if (m != i)
//				printf("*");
//			m = m / i;
//		}
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	printf( "  *\n ***\n*****\n ***\n  * ");
//		return 0;
//}

//#include <stdio.h>
//int main()
//{
//	printf("                ********\n");
//	printf("               ************\n");
//	printf("               ####....#.\n");
//	printf("             #..###.....##....\n");
//	printf("             ###.......######              ###            ###\n");
//	printf("                ...........               #...#          #...#\n");
//	printf("               ##*#######                 #.#.#          #.#.#\n");
//	printf("            ####*******######             #.#.#          #.#.#\n");
//	printf("           ...#***.****.*###....          #...#          #...#\n");
//	printf("           ....**********##.....           ###            ###\n");
//	printf("           ....****    *****....\n");
//	printf("             ####        ####\n");
//	printf("           ######        ######\n");
//	printf("##############################################################\n");
//	printf("#...#......#.##...#......#.##...#......#.##------------------#\n");
//	printf("###########################################------------------#\n");
//	printf("#..#....#....##..#....#....##..#....#....#####################\n");
//	printf("##########################################    #----------#\n");
//	printf("#.....#......##.....#......##.....#......#    #----------#\n");
//	printf("##########################################    #----------#\n");
//	printf("#.#..#....#..##.#..#....#..##.#..#....#..#    #----------#\n");
//	printf("##########################################    ############\n");
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	char a;
//	scanf("%c", &a);
//	printf("  %c\n",a);
//	printf(" %c%c%c\n", a,a,a);
//	printf("%c%c%c%c%c\n",a,a,a,a,a);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	//利用条件运算符 >=90分输入A,60-89分输入B,<60输出C
//	int score = 90;
//	char grade;
//	grade = ((score >= 90) ? 'A' : (score >= 60) ? 'B' : 'C');
//	printf("grade=%c\n", grade);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	//求最大公约数,最小公倍数
//	// 求最大公约数 用辗转相除法(又名欧几里德算法)
//	//最小公倍数=两个数的积除以最大公约数
//	int a, b;
//	int r = 0,g=0,s=0;
//	printf("请输入两个值:");
//	scanf("%d%d", &a, &b);
//	r = a % b;
//	g = a * b;
//	while (r != 0)
//	{
//		a = b;
//		b = r;
//		r = a % b;
//	}
//	s = g / b;
//	printf("最大公约数:%d\n", b);
//	printf("最小公倍数:%d\n", s);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	//计算输入一行的英文字符,数字字符,空格字符,其他字符的数量
//	char c;
//	int letter = 0;
//	int number = 0;
//	int space = 0;
//	int other = 0;
//	c = getchar();
//	while (c != '\n')
//	{
//		if (c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z')
//			letter++;
//		else if (c >= '0' && c <= '9')
//			number++;
//		else if (c == ' ')
//			space++;
//		else
//		{
//			other++;
//		}
//		c = getchar();
//	}
//	printf("字母=%d,数字=%d,空格=%d,其他=%d\n", letter, number, space, other);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	//计算s=a+aa+aaa+aaaa+aaaaa
//	// 例如s=2+22+222+2222+22222
//	//加a的个数由键盘控制
//	int a = 2;
//	int t = a;
//	int sum = 0;
//	int n = 0;
//	while (n < 5)
//	{	
//		sum += a;
//		printf("a=%d\n", a);
//		a *= 10;
//		a += t;
//		n++;
//	}
//	printf("sum=%d\n", sum);
//}


//#include <stdio.h>
//int main()
//{
//	//判断是否为完全数		完全出数等于(除它本身)它的因子之和
//	//例如  6=1+2+3;
//	int a = 10;
//	int sum = 0;
//	int i;
//	for (i = 1; i < a; i++)
//	{
//		if (a % i == 0)
//		{
//			sum += i;
//		}
//		else
//		{
//			;
//		}
//	}
//	if (a == sum)
//	{
//		printf("%d 是完全数\n", a);
//	}
//	else
//		printf("%d 不是完全数\n", a);
//	return 0;
//}

//#include <stdio.h>
//
//int compNum(int m)
//{
//	int i;
//	int sum = 0;
//	for (i = 1; i < m; i++)
//	{
//		if (m % i == 0)
//		{
//			sum += i;
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
//	int compNum(int m);
//	int n;
//	for (n = 1; n <= 1000; n++)
//	{
//		if (compNum(n))
//		{
//			printf("%d 是完全数\n", n);
//		}
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	//一个球从100米自由落地,每次反跳的高度为原来的一半,再落下,求第十次落地时的共经过多少米?第十次反跳的高度?
//	float h = 100;
//	float s = 100;
//	int i;
//	h = h / 2;
//	for (i = 2; i <= 10; i++ )
//	{
//		s = s + h * 2;
//		h = h / 2;
//	}
//	printf("s=%f,h=%f\n", s, h);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	//问题:猴子吃桃问题:猴子第一天摘下若干桃子,吃了一半,还不过瘾又吃一个,如此循环下去,第十天只剩下一个,请问第一天摘了多少个
//	//day 10  y=1  day9/2-1
//	//day 9 = day8/2-1 = (day10+1)*2
//	//day 8 = (day9+1)*2
//	int day;
//	int y = 1,x=0;
//	for (day = 9; day >= 1; day--)
//	{
//		x = (y + 1) * 2;
//		y = x;
//	}
//	printf("%d\n", y);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	//打印出菱形
//	int i,j,k,i1,j1,k1;
//	for (i = 0; i < 4; i++)
//	{
//		for (j = 0; j < 3 - i; j++)
//		{
//			printf(" ");
//		}
//		for (k = 0; k < 2*i + 1; k++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	for (i1 = 3; i1 > 0; i1--)//5 3 1
//	{
//		for (j1 = 0; j1 <= 3 - i1; j1++)
//		{
//			printf(" ");
//		}
//		for (k1 = 0; k1 < 2 * i1 - 1; k1++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//}

//#include <stdio.h>
//
//int main()
//{
//    int i;//循环次数
//    int j = 1;//第五只猴子分的桃子
//    int x;//桃子数
//    while (1)
//    {
//        x = 4 * j;
//        printf("第五只猴子分得桃子为%d个时,剩余桃子数为%d\n", j, x);
//        for (i = 0; i < 5;)
//        {
//            if (x % 4 != 0)break;//必须连续五次x都能被4整除才符合条件.
//            else
//            {
//                x = (x / 4) * 5 + 1;
//                printf("第五只猴子分得桃子为%d个时,剩余桃子数为%d\n", j, x);
//                i++;
//            }
//        }
//        printf("\n");
//
//        j++;
//        if (i == 5)
//            break;
//    }
//
//    printf("%d", x);
//    return 0;
//}


/*实际上挺简单的, 就是从少到多不断的尝试第五只猴子拿走的桃子数目.1、2、3、4、5..
假如第五只猴子拿走一个桃子, 则剩下4个桃子, 被它扔掉1个桃子
X5------ - 4 * (5 / 4) + 1
X4------ - (X5) * (5 / 4) + 1
X3------ - (X4) * (5 / 4) + 1
X2------ - (X3) * (5 / 4) + 1
X1------ - (X2) * (5 / 4) + 1
总的桃子数就是X1, 但是X1是最小值*/
//#include <stdio.h>
//int main()
//{
//int n = 1, i = 0, sum = 0;
//int flag = 0;
//do
//{
//	sum = n * 4;
//	for (i = 0; i < 5; i++)
//	{
//		if ((sum * 5) % 4)
//		{
//			flag = 1;
//			break;
//		}
//		sum = sum * 5 / 4 + 1;
//		}
//	if (i >= 5)
//	{
//		flag = 0;
//	}
//		n++;
//} while (flag);
//	printf("海滩上原来最少有%d个桃子\n", sum);
//	return 0;
//}

//海滩上有一堆桃子，5个猴子来分

#include<stdio.h>

int taozi(int t)
{
	int i = 0, tmp;
	while (i < 5 && t>0)
	{
		if ((t - 1) % 5 == 0) //扔掉一个之后 刚好分成五份
		{
			tmp = (t - 1) / 5 + 1; //猴子拿走的 + 扔掉的一个 
			t -= tmp; //剩下的桃子 
			i++;
		}
		else
			return 0;
	}
	return 1;
}

int main()
{
	int n = 6;//最后一个猴子 至少有六个  分成五份 扔掉一个
	while (1)
	{
		if (taozi(n))
			break;
		n++;
	}
	printf("%d", n);
}


//#include <stdio.h>
//int strlen(char arr[])
//{
//	int i;
//	int count = 0;
//	for (i = 0; arr[i] != 0; i++)
//	{
//		count++;
//	}
//	return count;
//}
//int main()
//{
//	char arr[80];
//	char arr2[80];
//	int a1, a2,i;
//	printf("请输入第一串字符:");
//	gets(arr);
//	printf("请输入第二串字符:");
//	gets(arr2);
//	a1 = strlen(arr);
//	a2 = strlen(arr2);
//	for (i = 0; arr[i] != 0; i++)
//	{
//		arr[i + a1] = arr2[i];
//	}
//	//arr[a1 + a2] = '\0';
//	puts(arr);
//	return 0;
//}

//#include <stdio.h>
//int sushu(int a)
//{
//	int n;
//	for (n = 2; n < a; n++)
//	{
//		if (a % n == 0)
//			break;
//	}
//	if (a == n)
//	{
//		return 1;
//	}
//	else
//		return 0;
//}
//
//int main()
//{
//	int a;
//	int i = 0;
//	scanf("%d", &a);
//	i = sushu(a);
//	if (i)
//		printf("%d 是素数\n", a);
//	else
//		printf("%d 不是素数\n", a);
//}

//#include <stdio.h>
//int main()
//{
//	int arr[3][4] = { {12,34,54,67},{11,53,24,1000},{234,3326,542,33} };
//	int max = 0;
//	int i, j;
//	max = arr[0][0];
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 4; j++)
//		{
//			if (max < arr[i][j])
//				max = arr[i][j];
//		}
//	}
//	printf("max=%d\n", max);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	//统计字符串中的英文字母,数字,空格和其他字符的个数
//	char a;
//	int letter=0, num=0, space=0, other=0;
//	printf("请输入一串字符:\n");
//	a=getchar();
//	while (a != '\n')
//	{
//		if (a >= 'a' && a <= 'z' || a >= 'A' && a <= 'Z')
//			letter++;
//		else if (a >= '0' && a <= '9')
//			num++;
//		else if (a == ' ')
//			space++;
//		else
//			other++;
//		a=getchar();
//	}
//	printf("letter=%d,num=%d,space=%d,other=%d\n", letter, num, space, other);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	//统计字符串中由多少个单词组成的,要求每个单词之间用空格分隔开,最后的字符不能为空格
//	char a;
//	int word=0;
//	int num=0;
//	printf("输入一串字符:\n");
//	a = getchar();
//	while (a != '\n')
//	{
//		if (a == ' ')
//			num = 0;
//		else if (num == 0)
//		{
//			num++;
//			word++;
//		}
//		a = getchar();
//	}
//	printf("word=%d\n", word);
//	return 0;
//}