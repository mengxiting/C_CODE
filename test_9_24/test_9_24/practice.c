#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//void bubble_sort(int arr[], int sz)
//{
//	//ȷ��ð�����������
//	int z = 0;
//	for (z = 0; z < sz-1; z++)
//	{
//		int flag = 1;//������һ������������Ѿ�������		�Ż�����
//		//ÿһ��ð������
//		int j = 0;
//		for (j = 0; j < sz - 1 - z; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//				flag = 0;//���������������ʵ����ȫ����
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
//	//ð��(bubble)���� ����
//	int i = 0;
//	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
//	//��arr��������
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr,sz);//ð��������
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
//	int arr[3][4] = { {1,2,3},{4,5} };			//��ά����
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
//	if (n == 3)					//�ݹ� ��ʱ���ʺ�����,�ظ��ĵط���
//	{
//		count++;//���Ե�����쳲��������Ĵ���
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
//		a = b;    //û���ظ�������,�ٶȿ�;
//		b = c;
//		n--;
//	}
//	return c;
//}
//int main()
//{
//	//쳲�������   1 1 2 3 5 8 13 21 34....
//	//
//	//
//	//������n��쳲�������
//	int n = 0;
//	int ret = 0;
//	scanf_s("%d", &n);
//	//TDD----������������
//	ret = Fib2(n);
//	printf("ret=%d\n", ret);
//	/*printf("count=%d\n", count);*/
//}

//#include <stdio.h>
//int Fac1(int i)
//{
//	int n = 0;
//	int ret = 1;   //ѭ��
//	for (n = 1; n <= i; n++)
//	{
//		ret *= n;
//	}
//	return ret;
//}
//int Fac2(int i) ////�׳�  �ݹ�
//{
//	if (i <= 1)
//		return 1;
//	else
//		return i * Fac2(i - 1);
//}
//int main()
//{
//	//��n�Ľ׳�
//	int i = 0;
//	int ret = 0;
//	scanf_s("%d", &i);
//	ret = Fac2(i);//ѭ���ķ�ʽ
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
////Ҫ���ޱ������ �ַ����ĳ���
////ʹ�õݹ�ķ���
////���»�С
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
//	//���ַ������ȵĺ���
//	char arr[] = "abc";
//	/*int len = strlen(arr); //���ַ�������
//	printf("%d ", len);*/
//	//ģ�����ַ�������,ģ��һ��strlen
//	int len = my_strlen(arr); //arr������,���鴫��,����ȥ�Ĳ�����������,���������һ��Ԫ�صĵ�ַ
//	printf("%d ", len);
//	return 0;
//}
//#include <stdio.h>			//�ݹ�ķ���
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
//	//�ݹ�
//	//1234����Ϊ 1 2 3 4  һ���޷��ŵ����Ͱ�˳���ӡ������ÿһ��ֵ
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
//	//1.�������ֵ
//	int ret = 0;
//	int guess = 0;//���ղ�������
//	ret = rand() % 100 + 1;//����1-100�����ֵ
//	//2.���ֻ���
//	while (1)
//	{
//		printf("��Ϸ��ʼ,�����>:\n");
//		scanf("%d", &guess);
//		if (guess > ret)
//		{
//			printf("�´���\n");
//		}
//		else if (guess < ret)
//		{
//			printf("��С��\n");
//		}
//		else
//		{
//			printf("��ϲ��,�¶���.\n");
//			break;
//		}
//	}
//}
//int main()
//{
//	//������Ϸ
//	int input = 0;
//	srand((unsigned int)time(NULL));
//	do
//	{
//		menu();
//		printf("��ѡ��ʼ��Ϸ>:");
//		scanf_s("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("�˳���Ϸ\n");
//			break;
//		default:
//			printf("ѡ�����\n");
//		}
//	} while (input);
//	return 0;
//}
//#include <stdio.h>  //������Ϸexe
//#include <time.h>  //����ʱ���
//#include <stdlib.h>  //���������(rand)
//void menu()
//{
//	printf("*************************************\n");
//	printf("******    1.play   0.exit    ********\n");
//	printf("*************************************\n");
//}
//void game()
//{   //Rand_Max--32767
//	//1.����һ�����ֵ;
//	int ret = 0;
//	int guess = 0;//���ղ����ֵ�ֵ
//	//��ʱ������������ֵ��������ʼ��;
//	// time_t time(time_t *timer)
//	// time_t
//	ret = rand()%100+1;//����1-100�����
//	//2.������
//	while (1)
//	{
//		printf("�������>:");
//		scanf_s("%d", &guess);
//		if (guess > ret) 
//		{
//			printf("�´���\n");
//		}
//		else if (guess < ret) 
//		{
//			printf("��С��\n");
//		}
//		else
//		{
//			printf("��ϲ��,�¶���\n");
//			break;
//		}
//	}
//
//}
//int main()
//{
//	int input = 0;
// //	//��ʱ������������ֵ��������ʼ��;
//	srand((unsigned int)time(NULL));
//	do 
//	{
//		menu();
//		printf("��ѡ��>:");
//		scanf_s("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();//������Ϸ��ʼ
//			break;
//		case 0:
//			printf("�˳���Ϸ\n");
//			break;
//		default:
//			printf("ѡ�����\n");
//			break;
//		}
//	}while (input);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	printf("%d", printf("%d", printf("%d", 43)));//4321 printf()��ӡ�����ַ�����
//	return 0;
//}

//#include <stdio.h>
//void Add(int* p)
//{
//	(*p)++;
//}
//int main()
//{		//����һ�μ�1
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
//	//���ֲ���
//	//��˳���һ�������������
//	char arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 6;
//	int sz = sizeof(arr) / sizeof(arr[0]);////Ԫ�ظ���
//	int ret = binary_search(arr, k, sz);
//	//�趨�ҵ���,��ʾ�±�,�Ҳ���1
//	if (ret == -1)
//	{
//		printf("�Ҳ�����\n");
//	}
//	else
//	{
//		printf("�ҵ���,�±�Ϊ:%d\n", ret);
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
//	//����:���Ա��ĺ��İ����� �����Ա�100����
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
//int main()												//ȡ��ַ��ָ������ú������÷�
//{
//	int a = 20;
//	int b = 40;
//	printf("%d %d\n", a, b);
//	swap(&a, &b);  ////swap ����
//	printf("%d %d\n", a, b);
//	return 0;
//}

//#include <stdio.h>
//#include <math.h>
////������ ����1 	�������� ����0
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
//{		//�ж�һ�����Ƿ�Ϊ����
//	int i = 0;
//	//100 ---200 ������
//	for (i = 100; i <= 200; i++) 
//	{
//		//�ж�i�Ƿ�Ϊ����
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
//	//���ֲ��ҷ�   (�԰���ҷ�)
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
//			printf("�ҵ���,�±�Ϊ%d:",mid);
//			break;
//		}
//		if (left > right)
//		{
//			printf("�Ҳ�����");
//		}
//	
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	//�˷��ھ���
//	int i = 0;
//	//��ӡ����
//	for (i = 1; i <= 9; i++) {
//		int j = 1;
//		//ȷ������
//		for (j = 1; j <= i; j++) {
//			printf("%d*%d=%-2d ", i, j, i * j);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{																//�˷��ھ���
//	int i = 0;
//	//��ӡ����
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
//	//��ʮ�����е����ֵ;
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
//	//��1/1-1/2+1/3-1/4....+1/99-1/100��ӵ�ֵ
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
//	int count = 0;											//�ҳ�1-100�����ж��ٸ�9;
//	for (i = 1; i <= 100; i++) {
//		if (i % 10 == 9) {
//			count++;
//		}	//���й�ϵ:����if (99)
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
//	//��0-100������(����)
//	//sqrt--��һ����ƽ������ѧ�⺯��					//i=a*b 16=4*4=2*8 a��b����һ����<=i�Ŀ�ƽ��
//*	for (i = 100; i <= 200; i++)*/ 
//	for(i=101;i<=200;i+=2)//һ�������ż��
//	{
//		//�ж�i�Ƿ�Ϊ����
//		//�������жϹ���
//		//1.�Գ���  (_���ַ���)
//		//����2->i-1     (13  2-12)
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
//	//��1000��-2000���е�����
//	for (year = 1000; year <= 2000; year++) {
//	//															//�����Ҫ��:
//	//															//1.���Ա�4����,�����Ա�100������;
//	//	1.��һ������											//2.���Ա�400����
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
//		///2.�ڶ�������
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
//	scanf("%d%d",&a,&b);									//���Լ���Ĺ�ʽ
//															//շת�����
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
//	for (i = 1; i <= 100; i++) {							//���ı�������
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
//	printf("����������ֵ:");
//	scanf_s("%d%d%d", &a, &b, &c);
//	if (a < b)
//	{
//		int tmp = a;
//		a = b;													//�Ӵ�С�Զ�����
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
	//		printf("����������:");
	//		scanf("%s", password);
	//		if (strcmp(password, "123456") == 0)						//�������
	//		{
	//			printf("������ȷ\n");
	//			break;
	//		}
	//		else
	//		{
	//			printf("�������\n");
	//		}
	//	}
	//	if (i == 3) 
	//	{
	//		printf("�����������,���˳�\n");
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
//	for (n = 1; n <= 10; n++) {									//�׳˹�ʽ
//																//�׳���ӹ�ʽ
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
//		else if (arr[mid] < k)												//�ҳ�ĳ��Ԫ�صĴ���
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			printf("��ϲ��,�ҵ���,�±�Ϊ:%d\n", mid);
//			break;
//		}
//		if (left > right)
//		{
//			printf("��ǸĿ���޷��Ҳ���\n");
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
//	int right = strlen(arr1) - 1;							//���������м�仯�Ĵ���
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