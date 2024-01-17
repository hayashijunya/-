チャレンジ課題

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

typedef enum
{
	warrior, mage, rogue
} characterclass;

int main()
{
	srand(time(NULL));

	int memory = rand() % 21;
	int agility = rand() % (21 - memory);
	int charm = 20 - memory - agility;

	printf("記憶力: %d, 瞬発力: %d, 魅力: %d\n", memory, agility, charm);

	characterclass characterclass;
	if (memory > agility && memory > charm)
	{
		characterclass = warrior;
	}
	else if (agility > memory && memory > charm)
	{
		characterclass = rogue;
	}
	else
	{
		characterclass = mage;
	}

	switch (characterclass)
	{
	case warrior:
		printf("クラス: 魔法使い系\n");

		break;
	case mage:
		printf("クラス: 盗人系\n");

		break;
	case rogue:
		printf("クラス: ファイター系\n");

		break;
	}

	return 0;
}
