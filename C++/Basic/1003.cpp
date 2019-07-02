#include<stdio.h>
#include<stdlib.h>

int main()
{
	int number;
	char input[100];
	int t, p;
	char statistics[3];
	
	t = p = 0;

	scanf("%d", &number);

	for (int i = 0; i < number; i++)
	{
		scanf("%s", input);
		
		for (int i = 0; i < 3; i++)
			statistics[i] = 0;

		int length = 0;
		int flag = 1;
		for (int j = 0; input[j] != '\0'; j++)
		{
			if (input[j] == 'P') {
				p = j;
				statistics[0]++;
			}
			else if (input[j] == 'A')
				statistics[1]++;
			else if (input[j] == 'T') {
				t = j;
				statistics[2]++;
			}
			else {
				flag = 0;
				break;
			}
			length++;
		}

		if (flag == 0)
		{
			printf("NO\n");
		}
		else if (statistics[0] == 1 && statistics[1] != 0 && statistics[2] == 1 && (t - p) != 1 && (length - t - 1) == p * (t - p - 1))
			printf("YES\n");
		else
			printf("NO\n");

	}

	return 0;
}