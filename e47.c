#include<stdio.h>
int main(){
	int i,j,k,ph=4,ms=ph*2-1,ps=ph-1;
	for(i=ph;i>=1;i--){
		for(j=ps;j>=i;j--){
			printf(" ");
		}
		for(k=1;k<=ms;k++){
			printf("*");
		}
		ms-=2;
		printf("\n");
	}
	return 0;
}
