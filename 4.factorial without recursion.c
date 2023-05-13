#include<stdio.h>
int main(){
	int num,i,fact=1;
	printf("Enter the number: ");
	scanf("%d",&num);
	
	for(i=1;i<=num;++i){
		fact*=i;
	}
	printf("%d",fact);
	return 0;
}
