#include<stdio.h>

int main()
{ 
    int english,gujrati,hindi,maths,science;
	float percentage;
	printf("enter your english subject marks:");
	scanf("%d",&english);
	printf("enter your gujrati subject marks:");
	scanf("%d",&gujrati);
	printf("enter your hindi subject marks:");
	scanf("%d",&hindi);
	printf("enter your maths subject marks:");
	scanf("%d",&maths);
	printf("enter your science subject marks:");
	scanf("%d",&science);
	
	percentage=(english+gujrati+hindi+maths+science)/5;
	
	printf("your percentage is:%.0f\n",percentage);
	
	if(percentage<=35)
	{
		printf("fail");
	}
	else if(percentage>35 && percentage<=50)
	{
		printf("pass class");
	}
	else if(percentage>50 && percentage<=60)
	{
		printf("second class");
	}
	else if(percentage>60 && percentage<=75)
	{
		printf("first class");
	}
	else if(percentage>75)
	{
		printf("distinction");
	}
	else
	{
		printf("grade A+");
	}
}
