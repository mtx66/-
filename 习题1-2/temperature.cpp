#include<stdio.h>
int main()
{
	int f;
	double c;
	scanf("%d", &f);
	c = (f-32)*5.0/9.0;
	printf("%.3f", c);
	return 0;
}