#define _CRT_SECURE_NO_WARNINGS 1

//#include<stdio.h>
//int main()
//{
//	int i, j, s, n; /*����i����ѡ������Χ��j���Ƴ�����Χ��s��¼�ۼ�����֮��*/
//	printf("��������ѡ��Χ���ޣ�");
//	scanf("%d", &n); /* n��ֵ�ɼ�������*/
//	for (i = 2; i <= n; i++)
//	{
//		s = 0; /*��֤ÿ��ѭ��ʱs�ĳ�ֵΪ0*/
//		for (j = 1; j < i; j++)
//		{
//			if (i % j == 0) /*�ж�j�Ƿ�Ϊi������*/
//				s += j;
//		}
//		if (s == i) /*�ж���������Ƿ��ԭ�����*/
//			printf("It's a perfect number:%d\n", i);
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	//��1,2,3,4��λ�����һ����λ��
//	//Ҫ�����ظ�,��ͳ���ж�����λ��;
//	int b, s, g;
//	int sum = 0;
//	int count = 0;
//	for (b = 1; b < 5; b++)
//	{
//		for (s = 1; s < 5; s++)																//˼·:��ι���һ����λ��		b*100+s*10+g--��λ��
//		{																					//����ѭ������λ|ʮλ|��λ ��1��4һһ��ӡ����
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
//{//��*дһ��c
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
//{	//�žų˷���
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
//	//쳲���������
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
//	//�ж��Ƿ�Ϊ����,��ӡ101-200������
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
//		printf("%d ������");
//	}
//	else
//	{
//		return 0;
//		printf("%d ��������");
//	}
//}
//int main()
//{
//	//�ж��Ƿ�Ϊ����,��ӡ101-200������
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
//	//��ˮ�ɻ���1000����	ˮ�ɻ���Ϊһ������������ÿλ����������
//	//153   153 = 1^3+5^3+3^3;
//	int g=0, s=0, b=0;
//	int i = 0;
//	for (b = 1; b < 10; b++)
//	{
//		for (s = 0; s < 10; s++)														//�ظ����   ������	
//		{
//			for (g = 0; g < 10; g++)
//			{
//				i = g + s * 10 + b * 100;
//				if ( i == (g * g * g + s * s * s + b * b * b))
//				{
//					printf("%d ��ˮ�ɻ���", i);
//				}
//			}
//		}
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	//��ˮ�ɻ���1000����  ����λ����ˮ�ɻ���	ˮ�ɻ���Ϊһ������������ÿλ����������
//	//153   153 = 1^3+5^3+3^3;
//	int g = 0, s = 0, b = 0;
//	int i = 0;
//	for (i = 100; i < 1000; i++)
//	{
//		g = i % 10;	//�����λ��  
//		s = i / 10 % 10;  //���ʮλ��
//		b = i / 100;	//�����λ��
//		if (i == g * g * g + s * s * s + b * b * b)
//		{
//			printf("%d ��ˮ�ɻ���\n", i);
//		}
//	}
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	//����һ���������ֽ�������, ���� ����90  ���90=2*3*3*5;
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
//	//������������� >=90������A,60-89������B,<60���C
//	int score = 90;
//	char grade;
//	grade = ((score >= 90) ? 'A' : (score >= 60) ? 'B' : 'C');
//	printf("grade=%c\n", grade);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	//�����Լ��,��С������
//	// �����Լ�� ��շת�����(����ŷ������㷨)
//	//��С������=�������Ļ��������Լ��
//	int a, b;
//	int r = 0,g=0,s=0;
//	printf("����������ֵ:");
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
//	printf("���Լ��:%d\n", b);
//	printf("��С������:%d\n", s);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	//��������һ�е�Ӣ���ַ�,�����ַ�,�ո��ַ�,�����ַ�������
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
//	printf("��ĸ=%d,����=%d,�ո�=%d,����=%d\n", letter, number, space, other);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	//����s=a+aa+aaa+aaaa+aaaaa
//	// ����s=2+22+222+2222+22222
//	//��a�ĸ����ɼ��̿���
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
//	//�ж��Ƿ�Ϊ��ȫ��		��ȫ��������(��������)��������֮��
//	//����  6=1+2+3;
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
//		printf("%d ����ȫ��\n", a);
//	}
//	else
//		printf("%d ������ȫ��\n", a);
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
//			printf("%d ����ȫ��\n", n);
//		}
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	//һ�����100���������,ÿ�η����ĸ߶�Ϊԭ����һ��,������,���ʮ�����ʱ�Ĺ�����������?��ʮ�η����ĸ߶�?
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
//	//����:���ӳ�������:���ӵ�һ��ժ����������,����һ��,��������ֳ�һ��,���ѭ����ȥ,��ʮ��ֻʣ��һ��,���ʵ�һ��ժ�˶��ٸ�
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
//	//��ӡ������
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
//    int i;//ѭ������
//    int j = 1;//����ֻ���ӷֵ�����
//    int x;//������
//    while (1)
//    {
//        x = 4 * j;
//        printf("����ֻ���ӷֵ�����Ϊ%d��ʱ,ʣ��������Ϊ%d\n", j, x);
//        for (i = 0; i < 5;)
//        {
//            if (x % 4 != 0)break;//�����������x���ܱ�4�����ŷ�������.
//            else
//            {
//                x = (x / 4) * 5 + 1;
//                printf("����ֻ���ӷֵ�����Ϊ%d��ʱ,ʣ��������Ϊ%d\n", j, x);
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


/*ʵ����ͦ�򵥵�, ���Ǵ��ٵ��಻�ϵĳ��Ե���ֻ�������ߵ�������Ŀ.1��2��3��4��5..
�������ֻ��������һ������, ��ʣ��4������, �����ӵ�1������
X5------ - 4 * (5 / 4) + 1
X4------ - (X5) * (5 / 4) + 1
X3------ - (X4) * (5 / 4) + 1
X2------ - (X3) * (5 / 4) + 1
X1------ - (X2) * (5 / 4) + 1
�ܵ�����������X1, ����X1����Сֵ*/
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
//	printf("��̲��ԭ��������%d������\n", sum);
//	return 0;
//}

//��̲����һ�����ӣ�5����������

#include<stdio.h>

int taozi(int t)
{
	int i = 0, tmp;
	while (i < 5 && t>0)
	{
		if ((t - 1) % 5 == 0) //�ӵ�һ��֮�� �պ÷ֳ����
		{
			tmp = (t - 1) / 5 + 1; //�������ߵ� + �ӵ���һ�� 
			t -= tmp; //ʣ�µ����� 
			i++;
		}
		else
			return 0;
	}
	return 1;
}

int main()
{
	int n = 6;//���һ������ ����������  �ֳ���� �ӵ�һ��
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
//	printf("�������һ���ַ�:");
//	gets(arr);
//	printf("������ڶ����ַ�:");
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
//		printf("%d ������\n", a);
//	else
//		printf("%d ��������\n", a);
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
//	//ͳ���ַ����е�Ӣ����ĸ,����,�ո�������ַ��ĸ���
//	char a;
//	int letter=0, num=0, space=0, other=0;
//	printf("������һ���ַ�:\n");
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
//	//ͳ���ַ������ɶ��ٸ�������ɵ�,Ҫ��ÿ������֮���ÿո�ָ���,�����ַ�����Ϊ�ո�
//	char a;
//	int word=0;
//	int num=0;
//	printf("����һ���ַ�:\n");
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