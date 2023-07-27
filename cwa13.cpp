//no return and argument(multiplication)
#include <stdio.h>
void mul (int a ,int b);
int main()
{
	int a,b;
	printf("enter values of a and b");
scanf("%d%d",&a,&b);
	mul(a,b);
	return 0;
	
}
void mul(int a ,int b)
{

int c;
c=a*b;
printf("%d",c);
}

