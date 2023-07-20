#include <stdio.h>
int main() {
    int a,b,c,d,e,f,g;    
    printf("\n enter  numbers: %d%d%d%d%d%d",a,b,c,d,e,f);
    scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f);
    
    
    g =a+b*c+(d-e*f);
    printf("\n result:%d",g);
    

    return 0;
}
