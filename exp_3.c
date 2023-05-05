#include<stdio.h>
int main(){
	int t1=0,t2=1,n,nxtterm;
	
	printf("Enter the range of element: ");
	scanf("%d",&n);
	
	while(t1<=n){
		printf("%d",t1);
		nxtterm=t1+t2;
		t1=t2;
		t2=nxtterm;
	}
	return 0;
}
