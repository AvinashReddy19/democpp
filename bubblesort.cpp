//bubble sort
#include<stdio.h>
int main(){
	int i,j,temp,n;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(i=0;i<n-1;i++){
		for(j=0;j<n-1;j++){
			if(a[j+1]<a[j]){
				temp=a[j+1];
				a[j+1]=a[j];
				a[j]=temp;
			}
		}
	}
	for(i=0;i<n;i++)
	printf("%d ",a[i]);
}
