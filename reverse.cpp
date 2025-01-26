#include<stdio.h>
int main(){
	int a[100],i,n;
	printf("Enter Number of elements: ");
	scanf("%d",&n);
	for(i=0;i<n;i++){
        scanf("%d",&a[i]);
	}
	printf("In same order: ");
	for(i=0;i<n;i++){
        printf("%d ",a[i]);
	}
	printf("\n");

	for(i=0;i<n;i++){
        for(int j=i+1;j<n-1;j++){
            if(a[j]>a[i]){
            int temp=a[i];
            a[i]=a[j];
            a[j]=temp;
            }
        }
	}

	printf("In reverse sorting: ");
	for(i=0;i<n;i++){
        printf("%d ",a[i]);
	}
	printf("\n");

}
