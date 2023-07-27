//no return and argument(subtraction)
#include <stdio.h>
void sub (int a ,int b);
int main()
{
	int a,b;
	printf("enter values of a and b");
scanf("%d%d",&a,&b);
	sub(a,b);
	return 0;
	
}
void sub(int a ,int b)
{

int c;
c=a-b;
printf("%d",c);
}

