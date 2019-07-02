#include<stdio.h>


void copyCharArray(char target[], char source[]);
void printCharArray(char arr[]);

int main()
{
	int number;
	scanf("%d", &number);

	int max, min;
	char input1[11], input2[11];
	int grade;
	char Name[2][11];
	char SNO[2][11];

	max = 0;
	min = 100;

	for (int i = 0; i < number; i++)
	{
		scanf("%s %s %d", &input1, &input2, &grade);


		if (grade > max)
		{
			max = grade;
			copyCharArray(Name[0], input1);
			copyCharArray(SNO[0], input2);
		}

		if (grade <= min)
		{
			min = grade;
			copyCharArray(Name[1], input1);
			copyCharArray(SNO[1], input2);
		}
	}

	printCharArray(Name[0]);

	printf(" ");
	printCharArray(SNO[0]);
	printf("\n");

	printCharArray(Name[1]);

	printf(" ");
	printCharArray(SNO[1]);
	printf("\n");
	
	return 0;
}

void copyCharArray(char target[], char source[])
{
	int i;
	for (i = 0; source[i] != '\0'; i++)
		target[i] = source[i];
	target[i] = '\0';
}

void printCharArray(char arr[])
{
	int i;
	for (i = 0; arr[i] != '\0'; i++)
		printf("%c", arr[i]);
}
