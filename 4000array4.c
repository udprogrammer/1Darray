#include<stdio.h> 

main() 
{ 
	
	int i; 
	int a[3]={11,22,33}; 
	int b[3]={3,4,6}; 
	int c[3];
	for (i=0; i<3 ;i++) 
	{ 
		c[i] = a[i]+b[i]; 
		printf("%d ",c[i]); 
	} 
}
