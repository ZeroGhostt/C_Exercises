#include<stdio.h>
int main(){
	int i,j,k,ph=4,w=ph*2-1,ps=ph-1;
	for(i=ph;i>=1;i--){
		for(j=ps;j>=i;j--){
			printf(" ");
		}
		for(k=1;k<=w;k++){
			printf("%d",i);
		}
		w-=2;
		printf("\n");
	}
	return 0;
}
