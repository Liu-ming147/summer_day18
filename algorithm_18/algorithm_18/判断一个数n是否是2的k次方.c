#include<stdio.h>
void is_2power()
{
	int n, i;
	scanf("%d", &n);
	while (n != 2)
	{
		if (n % 2 == 0)
		{
			n /= 2;
		}
		else
			break;
	}
	if (n == 2)
		printf("Yes!\n");
	else
		printf("No!\n");
}
int main()
{
	is_2power();

	return 0;
}