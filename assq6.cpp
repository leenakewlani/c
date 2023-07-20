#include <stdio.h>
int main() {
    int a,b,c,d,e,f,g;    
    printf("\n enter  numbers: %d%d%d%d%d%d",a,b,c,d,e,f);
    scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f);
    printf(" \n value of a: %d",a);
    printf("\n value of b: %d",b);
    printf("\n value of c: %d",c);
    printf("\n value of d: %d",d);
    printf("\n value of e: %d",e);
    printf("value of f: %d",f);
    
    g =a+b*c+(d-e*f);
    printf("\n result:%d",g);
    

    return 0;
}
