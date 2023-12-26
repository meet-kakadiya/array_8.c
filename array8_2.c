include<stdio.h>
void main(){
	int i,n,avg,total=0;
	int average;
	printf("Enter the size of the array: ");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<=n-1;i++){
		printf("Enter the Element a[%d]: ",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<=n-1;i++){
		printf("\nThe Element of a[%d] is: %d",i,a[i]);
		total+=a[i];
	}
	printf("\nThe Total is :%d",total);
	avg=total/n;
	printf("\nThe Average is :%d",avg);
}
