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
	length = 0;#include<stdio.h>
#include<math.h>

int isPrime(int n)
{
	if (n == 1 || n == 0)
		return 0;
	if (n == 2)
		return 1;
	int tmp = (int)sqrt((double)n);

	for (int i = 2; i <= tmp; i++)
	{
		if (n % i == 0)
			return 0;
	}
	return 1;
}

int main()
{
	int num, pairs;
	pairs = 0;
	scanf("%d", &num);
	for (int i = 3; i <= num - 2; i++)
	{
		if (isPrime(i) == 1 && isPrime(i + 2) == 1)
			pairs++;
	}
	printf("%d\n", pairs);
	return 0;
}

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