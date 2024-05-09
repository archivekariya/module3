#include<stdio.h>
int main()
{
	float pie=3.14;
	float h,b,l,w,r,area;
	int opt;
	printf("1.triangle\n2.rectangle\n3.circle\n");
    printf("select your option:");
	scanf("%d",&opt);
	
	switch(opt){
		case 1:
			printf("enter your h:\n");
			scanf("%f",&h);
			printf("enter your b:\n");
			scanf("%f",&b);
			
			area=h*b/2;
			printf("area of triangle is:%.0f",area);
			break;
		case 2:
			printf("enter your l:\n");
			scanf("%f",&l);
			printf("enter your w:\n");
			scanf("%f",&w);
			
			area=l*w;
			printf("area of rectangle is:%.0f",area);
			break;
		case 3:
			printf("enter your r:\n");
			scanf("%f",&r);
			
			area=pie*r*r;
			printf("area of circle is:%.0f",area);
			break;
		default:
			printf("enter your correct choice");
			break;
	}
}
