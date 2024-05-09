#include<stdio.h>
#include<string.h>    

main()
{
    char name[50];    
    char copyname[50]; 
	printf("enter the string:");
	scanf("%s",&name);   
    strcpy(copyname,name);    
    printf("name string: %s\n",name);    
    printf("copyname string: %s\n",copyname);    
    return 0;
}
