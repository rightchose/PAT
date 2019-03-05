#include<stdio.h>


int main()
{
	char str[100];
	char stack[80];
	gets(str);

	int length;
	for (length = 0; str[length] != '\0'; length++);

	int k = 0;
	for (int i = length - 1; i >= 0; i--)
	{
		if (str[i] != ' ')
			stack[k++] = str[i];
		else
		{
			for (int j = k - 1; j >= 0; j--)
				printf("%c", stack[j]);
			printf(" ");
			k = 0;
		}
	}
	for (int j = k - 1; j >= 0; j--)
		printf("%c", stack[j]);
		

	return 0;
}