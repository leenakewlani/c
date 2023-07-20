#include <stdio.h>


int main()
{
    int rl,phy,che,IP,total;
    float per;
    char nm[20],div[10];
    printf("Input the Roll Number of the student :");
    scanf("%d",&rl);
    printf("Input the Name of the Student :");
    scanf("%s",nm);
    printf("Input  the marks of Physics, Chemistry and Informatics Practices  : ");
    scanf("%d%d%d",&phy,&che,&IP);
    total = phy+che+IP;
    per = total/3;
    if (per>=60)
{

	printf("percentage:%f",per);
	 div=="First";
}
    else if (per<60&&per>=48)
    {
    printf("percentage:%f",per);
    div=="second";
}
        
	else if (per<48&&per>=36)
	{
	
	printf("percentage:%f",per);
	div== "pass";
}
	     else
	     {
		 printf("percentage:%f",per);
	     div=="fail";
}
       printf("\nRoll No : %d\nName of Student : %s\n",rl,nm);
       printf("Marks in Physics : %d\nMarks in Chemistry : %d\nMarks in Informatics Practices: %d\n",phy,che,IP);
       printf("Total Marks = %d\nPercentage = %f\nDivision = %s\n",total,per,div);
       
       
       return 0;
       
}


