#include<stdio.h>
int main(){
	int i,j,k,n=9;
	for(i=n;i>=0;i--){
		for(j=n-1;j>=i;j--){
			printf(" ");
		}
		for(k=0;k<=i;k++){
			printf("%d",k);
		}
		printf("\n");
	}
	return 0;
}
