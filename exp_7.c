#include<stdio.h>
int main(){
	int i,n,v,o,p,pos;
	while(1){
	
    printf("Enter the no of elements: ");
	scanf("%d",&n);
	
	int arr[n];
	printf("Enter the elements: ");
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}

	printf("enter the operation to be performed(1:insertion,2:deletion,3.display)");
	scanf("%d",&o);
	
	{
	
    if(o==1){
		
	printf("Enter the element to be inserted: ");
	scanf("%d",&v);
	printf("Enter the position at which the element to be inserted: ");
	scanf("%d",&p);
	
	for(i=n-1;i>=p-1;i--){
		arr[i+1]=arr[i];
	}
	arr[p-1]=v;
	
	printf("After inserting: ");
	for(i=0;i<=n;i++){
		printf("%d\n",arr[i]);
	}
}
   else if(o==2){
   	printf("Enter the postion to delete: ");
   	scanf("%d",&pos);
   	
   	for(i=pos-1;i<n-1;i++){
   		arr[i]=arr[i+1];
	   }
	printf("After deletion: ");
	for(i=0;i<n;i++){
		printf("%d\n",arr[i]);
	}
   }
   
   else if(i==3){
   	printf("entered elements are: \n");
   	for(i=0;i<n;i++){
   		printf("%d",arr[i]);
	   }
   }
   else{
   	printf("Enter valid option\n");
   }

}
}
}
