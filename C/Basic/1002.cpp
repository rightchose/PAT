#include<stdio.h>

int main()
{
	char number[100];
	int sum;
	scanf("%s", number);

	sum = 0;
	int i = 0;
	while (number[i] != '\0')
	{
		sum = sum + number[i] - 48;
		i++;
	}

	char dict[][10] = { "ling","yi","er","san","si","wu","liu","qi","ba","jiu","shi" };
	int outputIndex[5];

	i = 0;
	while (sum != 0)
	{
		outputIndex[i] = sum % 10;
		sum /= 10;
		i++;
	}

	for (int j = i - 1; j > 0; j--)
	{
		printf("%s ", dict[outputIndex[j]]);
	}

	printf("%s", dict[outputIndex[0]]);

	return 0;
}