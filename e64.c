#include<stdio.h>
int main(){
	int i,j,k,ph=5;
	for(i=1;i<=ph;i++){
		for(k=ph-1;k>=i;k--){
			printf(" ");
		}
		for(j=1;j<=i;j++){
			printf("* ");
		}
		printf("\n");
	}
	return 0;
}
