#include<stdio.h>
int main(){
	int arr[50];
	int i,n,search,found;
	
	printf("enter your sized:");
	scanf("%d",&n);
	
	printf("enter your elements:\n");
	for(i=0;i<n;i++){
	    scanf("%d",&arr[i]);
		
	}
	printf("\nenter your search:");
	scanf("%d",&search);
	found=0;
	
	for(i=0;i<n;i++){
	    if(arr[i] ==  search){
	    	found=1;
	    	break;
		}
		
	        	
		}
	
	if(found == 1){
		
		printf("%d is found in position :%d",search,i+1);
		
		
	}
	else{
		
		printf("%d is not found in position :%d",found);
	}
	
}
