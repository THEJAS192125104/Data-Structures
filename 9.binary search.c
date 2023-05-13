#include <stdio.h>

int binary_search(int arr[],int beg,int end,int f){
	int mid;
	if(end>=beg){
	mid=(beg+end)/2;
	if(arr[mid]==f){
		return mid+1;
	}
	else if(arr[mid]<f){
		return binary_search(arr,mid+1,end,f);
	}
	else{
		return binary_search(arr,beg,mid-1,f);
	}
}
	return -1;
}
	

int main(){
	int n,a,i,j,f,res;
	
	printf("Enter the no of elements: ");
	scanf("%d",&n);
	int arr[n];
	printf("Enter the elements: ");
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++){
	
		for(j=i+1;j<n;j++){
			if(arr[j]<arr[i]){
				a=arr[i];
				arr[i]=arr[j];
				arr[j]=a;
			}
		}
	}
	
	printf("After sorting: ");
	for(i=0;i<n;i++){
		printf("%d\n",arr[i]);
	}
	
	printf("Enter the element to be finded: ");
	scanf("%d",&f);
	
	res=binary_search(arr,0,n-1,f);
	
	if(res==-1){
		printf("Value is not in array");
	}
	else{
		printf("the value is present ar %d",res);
		
	}
}
