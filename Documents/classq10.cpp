#include <stdio.h>

int main() {
    int num;
    printf("enter number:%d",num);
    scanf("%d",&num);
    if (num%11==0 && num%5==0)
    {
    	printf("both are divisible");
    }
    	else
    	{
    	printf("not divisible");
    }
	

    return 0;
}
