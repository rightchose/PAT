#include<stdio.h>
#include<stdlib.h>

int main()
{
	int dict[10000];

	int number;
	int calc;
	int *input;

	scanf("%d", &number);

	input = (int*)malloc(sizeof(int) * number);
	for (int i = 0; i < number; i++)
	{
		scanf("%d", &input[i]);
		calc = input[i];
		while (calc != 1)
		{
			if (calc % 2 == 0)
			{
				calc /= 2;
				dict[calc] = 1;
			}
			else {
				calc = calc * 3 + 1;
				calc /= 2;
				dict[calc] = 1;
			}
		}
	}

	// sort
	for (int i = 1; i < number; i++)
	{
		int value = input[i];
		int j = i - 1;
		for (; j >= 0; j--)
		{
			if (value < input[j])
				break;
			else
				input[j+1] = input[j];
		}
		input[j+1] = value;
	}

	// store
	int length = 0;;
	for (int i = 0; i < number; i++)
		if (dict[input[i]] != 1)
			length++;

	int *res = (int*)malloc(sizeof(int) * length);
	int j = 0;
	for (int i = 0; i < number; i++)
	{
		if (dict[input[i]] != 1)
			res[j++] = input[i];
	}


	int flag = 0;
	for (int i = 0; i < length; i++)
		if (dict[res[i]] != 1)
		{
			if (flag == 0)
			{
				flag = 1;
			}
			else {
				printf(" ");
			}
			printf("%d", res[i]);
			
		}
	return 0;
}