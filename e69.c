#include<stdio.h>
int main(){
	int i,j,k,ph=5;
	for(i=ph;i>=1;i--){
		for(k=ph-1;k>=i;k--){
			printf(" ");
		}
		for(j=i;j>=1;j--){
			printf("* ");
		}
		printf("\n");
	}
	return 0;
}
