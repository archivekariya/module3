#include<stdio.h>

int main()
{
	int n,i,factorial=1;
	
	printf("enter your number:");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++){
		factorial=factorial*i;
	}
	printf("factorial is:%d",factorial);
}
