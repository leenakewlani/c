#include <stdio.h>
int main() 
{ 
	int num = 100; 
 
    while( num >= 1 ) 
    { 
        if ((num % 2) == 0 ) 
        { 
            printf("%d\n", num); 
        } 
		num--; 
    } 
 
    return 0; 
} 
