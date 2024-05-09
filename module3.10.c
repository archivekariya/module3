#include<stdio.h>
int main()
{
	int num[100];
	int n,i,j,ab;
	printf(" enter your size=");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		printf("enter number %d=",i);
		scanf("%d",&num[i]);
	}
    
    for(i=0;i<n;i++){
    	for(j=i+1;j<n;j++){
			
			if(num[i]>num[j]){
				
				ab=num[i];
				num[i]=num[j];
				num[j]=ab;
	        }
    
				
				
		}
		
				
	}
		
	    
		
		
	
	    
	printf("sorting of number is=\n ");    
    for(i=0;i<n;i++){
    	
    	printf("%d  ",num[i]);
	}
			
		
	    
			
}
