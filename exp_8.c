#include<stdio.h>
#define MAX_SIZE 100

int linear_search(int arr[],int n,int m){
	int i;
	for(i=0;i<n;i++){
		if(arr[i]==m){
			return i;
		}
		
	}
	return -1;
}

int main(){
	int n,arr[MAX_SIZE],i,m,res;
	
	printf("Enter the size of array: ");
	scanf("%d",&n);
	
	printf("Enter the elements: ");
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	
	printf("Enter the value to be searched: ");
	scanf("%d",&m);
	
	res=linear_search(arr,n,m);
	
	if(res==-1){
		printf("INVALID");
	}
	else{
		printf("the element is present at %d position",res);
	}
}
