//no return and argument(division)
#include <stdio.h>
void div (int a ,int b);
int main()
{
	int a,b;
	printf("enter values of a and b");
scanf("%d%d",&a,&b);
	div(a,b);
	return 0;
	
}
void div(int a ,int b)
{

int c;
c=a/b;
printf("%d",c);
}

