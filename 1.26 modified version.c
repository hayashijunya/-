自由課題

#include<stdio.h>
#include<time.h>
#include<windows.h>

void main()
{
	int n1;
	int n2;
	int i;
	char c[128];

	system("cls");

	srand(time(NULL));
	n1 = rand() % 100+1;

	printf(" 今コンピューターが数字を一つ選びました　*\n");
	printf(" 選んだ数字をあててください*\n");
	printf(" 数字の範囲は0から100です*\n");

	for (i = 1; i <= 300; i++)
	{
		printf("\n数字: ");
		fflush(stdout);
		gets(c); n2 = atoi(c);
		if (n1 == n2) break;
		if (n1 < n2)
			printf(" 高すぎる　");
		else
			printf(" 低すぎる　");
	}

	 printf("\n\n%d回目で当たり\n", i);
}