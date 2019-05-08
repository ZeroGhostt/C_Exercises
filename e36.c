#include<stdio.h>
int main(){
	int i,j,k,z=1,n=4;
	for(i=0;i<=n;i++){
		for(j=n-1;j>=i;j--){
			printf(" ");
		}
		for(k=1;k<=z;k++){
			printf("%d",z);
		}
		z+=2;
		printf("\n");
	}
	return 0;
}
