#include <stdio.h>
int main() {
    int a,b,c,d,e,g;    
    printf("\n enter  numbers: %d%d%d%d%d",a,b,c,d,e);
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
    printf("\n value of a: %d",a);
    printf("\n value of b: %d",b);
    printf("\n value of c: %d",c);
    printf("\n value of d: %d",d);
    printf("\n value of e: %d",e);
    
    
    g =a + (b * c- d)/e ;
    printf("\n result: %d",g);
    

    return 0;
}
