#include <stdio.h>
int main ()
{
	int i,j,s;
	
	
	for( i=1; i<=3;i++)
	{
		for( s=2; s>=i;s--)
	{
		printf(" ");
	}
	
	for( j=1; j<=i;j++)
	{
		printf("*");
	}

	
printf("\n");	
}
for( i=1; i<=2;i++)
	{
		for( s=1; s<=i;s++)
	{
		printf(" ");
	}
	
	for( j=2; j>=i;j--)
	{
		printf("*");
	}

	
printf("\n");	
}


	return 0;

}
