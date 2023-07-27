//no return no arguement(modular)
#include <stdio.h>
void mod();
int main ()
{
	mod();
	return 0;
	
}
void mod()

{

int a,b,c;

printf("enter values of a and b");
scanf("%d%d",&a,&b);
c=a%b;
printf("%d",c);

}
