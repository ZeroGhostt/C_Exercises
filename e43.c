#include<stdio.h>
int main(){
	int i,j,k,n=5,z=1;
	for(i=1;i<=n;i++){
		for(j=n-1;j>=i;j--){
			printf(" ");
		}
		for(k=z;k>=1;k--){
			printf("%d",abs(k-i));
		}
		z+=2;
		printf("\n");
	}
	getch();
	return 0;
}
