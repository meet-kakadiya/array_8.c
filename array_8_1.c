include<stdio.h>
void main(){
	int i,n,length=0;
	printf("Enter the size of the array: ");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<=n-1;i++){
		printf("Enter the Element a[%d]: ",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<=n-1;i++){
		printf("\nThe Element of a[%d] is: %d",i,a[i]);
		if(a[i]!=0){
		length++;
	}
	}
	printf("\n\nThe length of array is : %d",length);
}
