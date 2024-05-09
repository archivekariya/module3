#include<stdio.h>

int main(){
    int i=10;          
    int n1=0,n2=1,n3;  
    printf("First %d Fibonacci numbers:\n",i);

   
    while(i>0){
        printf("%d",n1); 
        n3=n1+n2;  
        n1=n2;  
        n2=n3;   
        i--; 
    }

    return 0;  
}
