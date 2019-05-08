#include<stdio.h>
int main(){
	int i,j,k,n,x=1,ph=5,ps=ph-1;
	for(i=1;i<=ph;i++){
		for(n=1;n<=ph;n++){
			printf(" ");
		}
		for(k=ps;k>=i;k--){
			printf(" ");
		}
		for(j=1;j<=i;j++){
			printf("* ");
		}
		printf("\n");
	}
	for(i=0;i<ph;i++){
		for(j=ps;j>i;j--){
			printf(" ");
		}
		for(k=0;k<=i;k++){
			printf("* ");
		}
		for(n=(ph+ph-2);n>=x;n--){
			printf(" ");
		}
		for(k=0;k<=i;k++){
			printf("* ");
		}
		x+=2;
		printf("\n");
	}
	return 0;
}
