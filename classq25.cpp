# include <stdio.h>
int main() {
    char degree;
    float temp,f,c;
    printf("enter f for fahrenite and c for celsius:%c",degree);
    scanf("%c",&degree);
    printf("enter temp: %f",temp);
    scanf("%f",&temp);
    if (degree>='c' || degree<='C')
    {
    	
    f=(temp*9/5)+32;
    printf("Temperature in Fahrenheit is : %f",f);
    }
    	else if (degree>='f' || degree<='F')
    	{ 
    	c = ((temp-32)*5)/9;
    	printf("Temperature in Celsius is : %f",c);
    }
	
	else
	{
		printf("NO WHERE EXISTS");
	}

    return 0;
}
