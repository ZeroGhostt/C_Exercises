#include<stdio.h>
int main(){
	int i,j,k,n=10;
	for(i=n;i>=0;i--){
		for(j=n-1;j>=i;j--){
			printf(" ");
		}
		for(k=1;k<=i;k++){
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
