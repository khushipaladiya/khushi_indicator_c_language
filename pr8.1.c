/*
 the length of a string using a Pointer
*/

#include<stdio.h>
main(){
	int n;
	int i;
	int count=0;
	char *p;
	char str[100];
	
	printf("Enter any string: ");
    gets(str);
   
		p=&str;
	
		
    for(i=0;str[i]!='\0';i++){
    	count++;
    	p++;
	}
	printf("The length of array is: %d",count);
}
