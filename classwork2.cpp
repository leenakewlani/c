#include <stdio.h>
int main ()
{
	int i,j,s,n;
	printf("enter no of lines",n);
	scanf("%d",&n);
	
	
	
	for( i=1; i<=n;i++)
	{
		for( s=n-1; s>=i;s--)
	{
		printf(" ");
	}
	
	for( j=1; j<=i;j++)
	{
		printf("*");
	}

	
printf("\n");	
}
return 0;
}
