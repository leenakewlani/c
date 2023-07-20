#include <stdio.h>

int main() {
    int s1,s2,s3,s8;
     float s4,s5,s6,s7,s9;
    
    printf("\n enter any 2 integers: %d%d",s1,s2);
    scanf("%d%d",&s1,&s2);
    
    s3 =s1*s2;
    printf("\n multiplication of two integers: %d",s3);
    printf("\n enter any 2 float values: %f%f",s4,s5);
    scanf("%f%f",&s4,&s5);
    s6 =s4*s5;
    printf("\n multiplication of float values :%f",s6);
    printf("\n enter any float value : %f",s7);
    scanf("%f",&s7);
    printf("\n enter any integer : %d",s8);
    scanf("%d",&s8);
    s9 =s7*s8;
    printf("\n multiplication : %f",s9);

    return 0;
}
