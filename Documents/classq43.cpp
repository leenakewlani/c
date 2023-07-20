#include <stdio.h>
int main()
{
	int num=14341,rem,sum=0;
	int temp;
	temp=num;
	while (num>0)
	{
		rem=num%10;
		sum=sum*10+rem;
		num=num/10;
	}
	printf("the reversed number:%d",sum);
	if (temp == sum)
	{
	printf("\nthis number is a palindrome");
}
else
{
	printf("\nthis number is not a palindrome");
}
	return 0;
}
