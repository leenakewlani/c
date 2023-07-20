#include <stdio.h>

int main() {
    char a;
    printf("enter any alphabet:%c",a);
    scanf("%c",&a);
    if (a=='a' || a=='e' || a=='i' || a=='o' || a=='u')
    {
    	printf(" you enterered a vowel");
    }
    	else
    	{
    	printf("you enterered a consonant");
    }
	

    return 0;
}
