#include <stdio.h>
int main() {
    int num, realnumber, remainder, result = 0;
    printf("Enter a three-digit integer: ");
    scanf("%d", &num);
    realnumber = num;

    while (realnumber != 0) {
        remainder = realnumber % 10;
        
       result += remainder * remainder * remainder;
        
       
       realnumber /= 10;
    }

    if (result == num)
        printf("%d is an Armstrong number.", num);
    else
        printf("%d is not an Armstrong number.", num);

    return 0;
}
