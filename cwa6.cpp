#include <stdio.h>
int div(int a,float b);
int main ()


{
	int a;
	float b;
	printf("enter values of a and b");
scanf("%d%f",&a,&b);

	div(a,b);
	return 0;
	
}
int div(int a,float b)

{


float c;
c=a/b;
printf("%f",c);
return 0;

}
