#include <stdio.h>

int main()
{
    int r, c, i, j;

    
    printf("Enter no of rows: ");
    scanf("%d", &r);
    printf("Enter no of columns: ");
    scanf("%d", &c);

    for(i=5; i<=r; i--)
    {
        for(j=1; j<=c; j++)
        {
            
            printf("%d", i);
        }

        printf("\n");
    }

    return 0;
}

