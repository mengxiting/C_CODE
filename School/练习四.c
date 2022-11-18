#include <stdio.h>
int main()
{
	int a = 123;
	int b = a % 10;
	int c = a % 100 / 10;
	int d = a / 100;
	int e = b * 100 + c * 10 + d;
	printf("%d", e);
	return 0;
}
