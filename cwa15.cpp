//no return and argument(modular)
#include <stdio.h>
void mod (int a ,int b);
int main()
{
	int a,b;
	printf("enter values of a and b");
scanf("%d%d",&a,&b);
	mod(a,b);
	return 0;
	
}
void mod(int a ,int b)
{

int c;
c=a%b;
printf("%d",c);
}

