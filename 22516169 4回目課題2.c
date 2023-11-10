10月27日
課題２
#include<stdio.h>

int main(void)
{

	int a;

	printf("aの値はいくらですか");
	scanf_s("%d", &a);
    
	if (a % 2 == 0)
	{
		printf("aは偶数である");
	}
	else
	{
		printf("aは奇数です");
	}

		return 0;
}