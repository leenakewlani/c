#include <stdio.h>

int main() {
    int s1,s2,s3,s4,s5;
    printf("enter your marks:%d%d%d%d%d",s1,s2,s3,s4,s5);
    scanf("%d%d%d%d%d",&s1,&s2,&s3,&s4,&s5);
    if (s1>=40 && s2>=40 && s3>=40 && s4>=40 && s5>=40)
    {
    	printf("you are pass");
    }
    	else
    	{
    	printf("you are fail");
    }
	

    return 0;
}
