#include <stdio.h>
int main() {
	int h;
	float spm,salary,s;
  printf("Enter your salary (per annum):%f ");
  scanf("%f", &salary);
  spm=salary/12;
  printf("enter no of holidays you did : %d");
  scanf("%d",&h);

  if (h==1)
  {
  
    printf("no salary deducted: %f",spm );
}
    else if(h>=2 && h<5)
    {
	
    s=spm-(5/100)*spm;
    printf("5 percent salary should be deducted:%f", s);
}
    else if(h>=5 && h<14)
    {
    s=spm-(10/100)*spm;
    printf("10 percent salary should be deducted:%f", s);
}
    else if(h>=14)
    {
    s=spm-(50/100)*spm;
    printf("50 percent salary should be deducted:%f", s);
}
    else 
    {
	
    
    printf("no salary:");
    
}
  return 0;
}
