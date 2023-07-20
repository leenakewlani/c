#include <stdio.h>

int main()
{
    float height;

    printf("Enter Height (in centimetres): ");
    scanf("%f", &height);

    if ((height >= 150.0) && (height <= 170.0)) {
        printf("Person is average height person");
    }
    else if ((height > 170.0) && (height <= 195.0)) {
        printf("Person is taller");
    }
    else if (height < 150.0) {
        printf("Person is dwarf");
    }
    else
        printf("Abnormal height \n");

    return 0;
}
