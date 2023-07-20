# include <stdio.h>
int main() {
    int a;
    printf("enter your age  : %d",a);
    scanf("%d",&a);
    if (a>=18)
    {
    	printf("you are eligible for voting");
    }
    	else if (a=='m' || a=='M')
    	{
    	printf("MALE");
    }
    else 
    {
    	printf("NOT VALID");
	}
	

    return 0;
}
