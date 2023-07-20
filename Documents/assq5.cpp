#include <stdio.h>

int main() {
    int s1,s2,s3;
    
    
    printf("\n enter any 2 integers: %d%d",s1,s2);
    scanf("%d%d",&s1,&s2);
    
    s3 =s1%s2;
    printf("\n modulus of two integers: %d",s3);
    

    return 0;
}
