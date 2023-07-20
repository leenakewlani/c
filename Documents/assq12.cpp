#include <stdio.h>

int main() {
    
    int m1,m2,m3,m4,m5,sum;
    float avg;
    
    printf("enter your marks: %d%d%d%d%d");
    scanf("%d%d%d%d%d",&m1, &m2, &m3, &m4, &m5);
    if (m1>=40 && m2>=40 && m3>=40 && m4>=40 && m5>=40)
    {
    	sum= m1+m2+m3+m4+m5;
    	avg= sum/5;
    	printf("your average is: %f", avg);
    }
    	
    	
    else
    {
    	printf("you are fail");
	}
    return 0;
}
