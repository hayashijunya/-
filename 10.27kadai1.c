10月27日
課題１

#include<stdio.h>

int main(void)
{

	int a,b,c;

	printf("aの値はいくらですか？");
	scanf_s("%d",&a);

	printf("bの値はいくらですか？");
	scanf_s("%d", &b);

	c = a + b;

    printf("%d",c);

		return 0;
}
