#include<stdio.h>
int main(){
	int i,j,k,n=10;
	for(i=0;i<10;i++){
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
