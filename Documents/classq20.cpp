# include <stdio.h>
int main() {
    int num;
    printf("enter integer:%d",num);
    scanf("%d",&num);
    if (num>0)
    {
    	printf("this is a positive integer");
    }
    	else if (num<0)
    	{
    	printf("this is a negative integer");
    }
    
	
	else
	{
		printf("you entered 0");
	}

    return 0;
}
