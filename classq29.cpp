#include <stdio.h>

int main()
{
    float phy, chem, bio, math, IP,per,a,total,t1; 
    

    
    printf("Enter five subjects marks:%f%f%f%f%f",phy,chem,bio,math,IP);
    scanf("%f%f%f%f%f", &phy, &chem, &bio, &math, &IP);
    total=phy + chem + bio + math + IP;
    t1=total*100; 


    per = t1 / 500;

    


    
    if (per> 80)
    
        printf("Grade A: %f",per);

    else if (per> 60 && per<= 80)
    
        printf("Grade B: %f",per);
    
    else if (per> 50 && per<= 60)
    
        printf("Grade C: %f");
    
    else if (per> 45 && per<= 50)
    
        printf("Grade D: %f");
    
    else if (per> 25 && per<= 45)
    
        printf("Grade E: %f",per);
    
    else
    
        printf("Grade F: %f",per);
    

    return 0;
}
