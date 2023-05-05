#include <stdio.h>
int main(){
	int num;
	printf("Enter the elements in spaced manner: ");
	while(scanf("%d",&num)==1){
		if(num%2==0){
			printf("Even\t");
		}
		else{
			printf("Odd\t");
		}
	}
	return 0;
}
