#include<stdio.h>
int main(){
	int n=1,p=5,ps=ps-1,i,j,k;
	for(i=0;i<p;i++){
		for(j=ps;j>i;j--){
			printf(" ");
		}
		for(k=0;k<n;k++){
			printf("*");
		}
		n+=2;
		printf("\n");
	}
}
