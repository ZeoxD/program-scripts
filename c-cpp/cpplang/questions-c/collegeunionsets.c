// Divyanshu Tripathi
//1900321290030
//2019B111060


#include<stdio.h>
 
int main()
{
	int A[20],B[20],u[40],i,j,k,n,m;
	
	printf("Enter 1st Array Size:");
	scanf("%d",&n);

	printf("Enter elements of 1st array in Ascending order:\n");
	for(i=0;i<n;++i){
		scanf("%d",&A[i]);
	}
	
	printf("\nEnter 2nd Array Size:");
	scanf("%d",&m);
	printf("Enter elements of 2nd array in Ascending order:\n");
	for(i=0;i<m;++i){
		scanf("%d",&B[i]);
	}
	
	for(i=0,j=0,k=0;i<n&&j<m;){
		if(A[i]<B[j]){
			u[k]=B[i];
			i++;
			k++;
		}
		else if(A[i]>B[j]){
			u[k]=B[j];
			j++;
			k++;
		}
		else{
			u[k]=A[i];
			i++;
			j++;
			k++;
		}
	}
	
	if(i<n){
		for(;i<n;++i){
			u[k]=A[i];
			k++;
		}
	}
	else if(j<m){
		for(;j<m;++j){
			u[k]=B[j];
			k++;
		}
	}
	
	printf("\nUnion of two arrays is:\n");
	for(i=0;i<k;++i){
		printf("%d ",u[i]);
	}
 
    return 0;
}