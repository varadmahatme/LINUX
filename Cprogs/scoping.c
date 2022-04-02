#include<stdio.h>
int fun1(int a);
int main()
{

	int a = 10;
	printf("%d", fun1(a));
	return 0;
	
}

int fun1(int a)
{

	int b = 5;
	b = b+a;
	return b;

}