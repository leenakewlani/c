#include <stdio.h>

int main() {
    char gender;
    printf("enter your gender in m or f:%c",gender);
    scanf("%c",&gender);
    if (gender=='f' )
    {
    	printf(" female ");
    }
    	else if(gender=='m')
    	{
		
    	printf("male");
    }
    else
    	{
    	printf("you enterered wrong0");
    }
	

    return 0;
}
