#include<stdio.h>
int fnMax(int x, int y);
main()
{
	int a,b,c;
	printf("��������������:");
	scanf("%d%d",&a,&b);
	c= fnMax(a,b);
	printf("%d",c);
	
}
int fnMax(int x,int y)
{
	int z;
	if(x>y)z=x;
	else z=y;
	return (z);
}
