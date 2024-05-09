#include<stdio.h>
int main()
{
	int n,i;
	int num=0;
	printf("enter your number:");
	scanf("%d",&n);
	if(n==1){
		printf("1 is not a prime or composite number");
		
	} 
	for(i=2;i<n;i++){
		
		if(n % i==0){
			num++;
		}
	   
	    
	}
	if(num==0){
		printf("%d is not a prime number",n);
	}
	else{
		printf("%d is a prime number",n);
		
	}
	return 0;
}
