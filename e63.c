#include<stdio.h>
int main(){
	int i,j,k,s=3;
	for(i=s;i>=-s;i--){
		for(j=1;j<=abs(i);j++){
			printf(" ");
		}
		for(k=s;k>=abs(i);k--){
			printf("%c",k+65);
		}
		printf("\n");
	}
	return 0;
}
