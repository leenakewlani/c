#include <stdio.h>

int main() {
    int s1,s2,s3;
     float s4,s5,s6;
    
    printf("\n enter any 2 integers: %d%d",s1,s2);
    scanf("%d%d",&s1,&s2);
    
    s3 =s1+s2;
    printf("\n addition of two integers: %d",s3);
    printf("\n enter any 2 float values: %f%f",s4,s5);
    scanf("%f%f",&s4,&s5);
    s6 =s4+s5;
    printf("\n addition of float values :%f",s6);
    

    return 0;
}
