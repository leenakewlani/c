#include <stdio.h>
int mul(int a,float b);
int main ()


{
	int a;
	float b;
	printf("enter values of a and b");
scanf("%d%f",&a,&b);

	mul(a,b);
	return 0;
	
}
int mul(int a,float b)

{


float c;
c=a*b;
printf("%f",c);
retun 0;

}
