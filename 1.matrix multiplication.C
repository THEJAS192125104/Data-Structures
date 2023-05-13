#include<stdio.h>
#include<stdlib.h>

int main(){
	int i,j,k,mat1[3][3],mat2[3][3],mul[3][3];
	
	
	printf("Enter the elements of first matrix: ");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			scanf("%d",&mat1[i][j]);
		}
			}
	printf("Enter the elements of second matrix: ");	
    for(i=0;i<3;i++){
    	for(j=0;j<3;j++){
    		scanf("%d",&mat2[i][j]);
    		
		}
	}
	
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			mul[i][j]=0;		
	for(k=0;k<3;k++){
		mul[i][j]+=mat1[i][k]*mat2[k][j];
	}
}
}
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("%d\t",mul[i][j]);
		}
		printf("\n");
	}
	return 0;
}
