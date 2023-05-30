#include<stdio.h>

main(){
	
	int n,n1,i;
	int a[100];
	int b[100];
	int c[200];
	printf("Enter array of a size  = ");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		printf("a[%d]=",i);
		scanf("%d",&a[i]);
	}
	printf("Enter array of b size  = ");
	scanf("%d",&n1);
	for(i=0;i<n1;i++){
		printf("b[%d]=",i);
		scanf("%d",&b[i]);
	}
	for(i=0;i<n;i++){
		c[i]=a[i];
		printf("%d",c[i]);
	}
	for(i=0;i<n1;i++){
		c[i]=b[i];
		printf("%d",c[i]);
	}
}
