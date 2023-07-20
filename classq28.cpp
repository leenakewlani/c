#include <stdio.h>

int main()
{
    float phy, chem, bio, math, IP,avg,a,total; 
    

    
    printf("Enter five subjects marks:%f%f%f%f%f",phy,chem,bio,math,IP);
    scanf("%f%f%f%f%f", &phy, &chem, &bio, &math, &IP);
    if (phy>=40 && chem>=40 && bio>=40 && math>=40 && IP>=40)
    {
    total=phy + chem + bio + math + IP;


    avg = total / 5;

    printf("average = %f",avg);
    scanf("%f",&avg);


    
    if (avg> 80)
    {
        printf("Grade A");
    }
    else if (avg> 60 && avg<= 80)
    {
        printf("Grade B");
    }
    else if (avg> 50 && avg<= 60)
    {
        printf("Grade C");
    }
    else if (avg> 45 && avg<= 50)
    {
        printf("Grade D");
    }
    else if (avg> 25 && avg<= 45)
    {
        printf("Grade E");
    }
    else
    {
        printf("Grade F");
    }
      }
else
{
	printf("you are fail:");
}


    return 0;
}
