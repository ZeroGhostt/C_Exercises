#include<stdio.h>
int main(){
	int i,j,k,ms=1,ph=5,ps=ph-1,n,x=1;
	for(i=0;i<ph;i++){
		for(j=ps;j>i;j--){
			printf(" ");
		}
		for(k=0;k<ms;k++){
			printf("*");
		}
		for(n=(ph+ph-2);n>=x;n--){
			printf(" ");
		}
		for(k=0;k<ms;k++){
			printf("*");
		}
		ms+=2;
		x+=2;
		printf("\n");
	}
	return 0;
}
