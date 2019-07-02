#include<stdio.h>


int main()
{
	int n, m;
	int arr[100];

	scanf("%d %d", &n, &m);

	for (int i = 0; i < n; i++)
		scanf("%d", &arr[i]);

	m = m % n;

	for (int i = (n - m) % n; i != (n - m - 1) % n; i = (i + 1) % n)
	{
		printf("%d", arr[i]);
		if (i != (n - m - 1) % n)
			printf(" ");
	}
	printf("%d\n", arr[(n - m - 1) % n]);
	
	return 0;
}