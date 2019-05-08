#include<stdio.h>
int main(){
	int i,j,k,ph=5,ps=ph-1,m=1;
	for(i=0;i<ph;i++){
		for(j=ps;j>i;j--){
			printf(" ");
		}
		for(k=0;k<m;k++){
			printf("%c",i+65);
		}
		m+=2;
		printf("\n");
	}
	return 0;
}
