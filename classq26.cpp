# include <stdio.h>
int main() {
    float a,l,b,h,w,aor,aos,aot,d,voc,vocb,voco,r;
    const float PI=3.14;
    r=b/2;
    int choice,ch,volch;
    printf("enter side of square : %f",a);
    scanf("%f",&a);
    printf("enter length  of rectangle: %f",l);
    
    scanf("%f",&l);
    printf("enter width  of rectangle: %f",w);
    scanf("%f",&w);
    printf("enter height  of rectangle: %f",d);
    scanf("%f",&d);
    printf("enter base  of triangle: %f",b);
    scanf("%f",&b);
    printf("enter height  of triangle: %f",h);
    scanf("%f",&h);
    printf("enter choice:1.area\n2.volume %d",choice);
    scanf("%d",&choice);
    if (choice==1)
    {
    	printf("enter choice:1.area of square\n2.area of recttangl\n3.area of triangle: %d",ch);
    	scanf("%d",&ch);
    	if (ch==1)
    	{
    	aos= a*a;
    	printf("area of square:%f",aos);
    }
    
    	
    else if (ch==2)
    {
    	aor= l*w;
    	printf("area of rectangle:%f",aor);
	}
	else if (ch==3)
	{
		aot= (b*h)/2;
		printf("area of triangle:%f",aot);
	}
	}
	else if (choice==2)
	{
		printf("enter volume choice:1.cube\n2.cuboid\n3.cone",volch);
		scanf("%d",&volch);
		if (volch==1)
    	{
    	voc=a*a*a;
    	printf("volume  of square:%f",voc);
    }
    
    	
    else if (volch==2)
    {
    	vocb=w*d*l;
    	printf("volume of cuboid:%f",vocb);
	}
	else if (volch==3)
	{
		
		r=b/2;
		voco= (PI * r * r * h) / 3.0 ;
		printf("area of cone:%f",voco);
	}
	}


	
	else
	{
		("you entered wrong choice");
	}
	

    return 0;
}
