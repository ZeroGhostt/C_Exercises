#include<stdio.h>
int main(){
	int i,j,k,z=1,n=5;
	for(i=0;i<n;i++){
		for(j=n-1;j>i;j--){
			printf(" ");
		}
		for(k=0;k<n;k++){
			printf("*");
		}
		z++;
		printf("\n");
	}
	return 0;
}
