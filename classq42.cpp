#include <stdio.h>
int main()
{
	int num;
	printf("enter any number:%d",num);
	scanf("%d",&num);
	int rem,sum;
	while (num>0)
	{
		rem=num%10;
		sum=sum*10+rem;
		num=num/10;
	}
	printf("the reversed number:%d",sum);
	return 0;
}
