#include<stdio.h>
void main(){
	int i,n,n1,n2;
	printf("Enter the size of the array A: ");
	scanf("%d",&n1);
	printf("Enter the size of the array B: ");
	scanf("%d",&n2);
	int a[n1],b[n2],c[n];
	if(n1==n2){
		n=n1+n2;
	for(i=0;i<=n1-1;i++){
		printf("Enter the Element A[%d]: ",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<=n2-1;i++){
		printf("Enter the Element B[%d]: ",i);
		scanf("%d",&b[i]);
	}
	for(i=0;i<n-1;i++){
		c[i]=a[i]+b[i];
	}
		for(i=0;i<n-2;i++){
	printf("\nThe Addition of Array A and B is %d",c[i]);
		}	
	}else{
		printf("\nThe Size of Array A and B must be same.");
	}
}
