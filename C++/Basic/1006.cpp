#include<stdio.h>

int main()
{
	int number;	// number < 1000
	int length;
	int m;
	int level;
	char output[50];
	scanf("%d", &number);

	level = 1;
	length = 0;

	while (number != 0)
	{
		m = number % 10;
		for (int i = 0; i < m; i++)
			if (level == 10)
				output[length++] = 'S';
			else if (level == 100)
				output[length++] = 'B';
			else if (level == 1)
				output[length++] = 48 + m - i;
		number /= 10;
		level *= 10;
	}

	for (int i = length - 1; i >= 0; i--)
		printf("%c", output[i]);
	printf("\n");

	return 0;

}