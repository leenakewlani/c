#include <stdio.h>

int main() {
    int num1,num2,num3;
    printf("enter your three numbers:%d%d%d",num1,num2,num3);
    scanf("%d%d%d",&num1,&num2,&num3);
    if (num1>num2 && num1>num3)
    {
    	printf("number1 is the greatest");
    }
    	else if(num2>num1 && num2>num3)
    	{
    	printf("number2 is the greatest");
    }
    else
    {
    	printf("number3 is the greatest");
	}
	

    return 0;
}
