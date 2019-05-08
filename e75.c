#include<stdio.h>
int main(){
	int i,j,k,s=4;
	for(i=s;i>=-s;i--){
		for(j=0;j<=abs(i);j++){
			printf(" ");
		}
		for(k=s;k>=abs(i);k--){
			printf("* ");
		}
		printf("\n");
	}
	return 0;
}
