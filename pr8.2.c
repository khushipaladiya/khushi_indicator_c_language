/*
 cubes of all elements from a given 2D array using Pointer with UDF
*/

#include<stdio.h>
int cube(int *p){
	p=&cube;
	return *p;
}
main(){
    int i,j,cube=0;
	int n;
	int *p;
	int a[n][n];
	
	printf("Enter Array size: ");
	scanf("%d",&n);
	
	printf("Enter array elements:\n");
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf("Enter a[%d][%d]: ",i,j);
			scanf("%d",&a[i][j]);
			cube=a[i][j]*a[i][j]*a[i][j];
			p=&cube;
			printf("Cube of all elements:%d\n\n",*p);
		}
	}
}
