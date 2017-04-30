#include<stdio.h>
int main(void)
{
	int k = 1;
	int n = 263;
	for (k = 1; n >= 1; k *= n % 10)//a[3]
	{
		k *= n % 10;
		n /= 10;

	}
	printf("%d\n", k);
	return 0;
	
	
}