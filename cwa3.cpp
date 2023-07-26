#include <stdio.h>
void add(int a,float b);
int main ()


{
	int a;
	float b;
	printf("enter values of a and b");
scanf("%d%f",&a,&b);

	add(a,b);
	return 0;
	
}
void add(int a,float b)

{


float c;
c=a+b;
printf("%f",c);

}
