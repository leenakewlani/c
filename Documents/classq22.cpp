# include <stdio.h>
int main() {
    char ch;
    printf("input the character:%c",ch);
    scanf("%c",&ch);
    if (ch>='A' && ch<='Z')
    {
    	printf("UPPER CASE");
    }
    	else if (ch>='a' && ch<='z')
    	{ 
    	printf("LOWER CASE");
    }
	
	else
	{
		printf("NO WHERE EXISTS");
	}

    return 0;
}
