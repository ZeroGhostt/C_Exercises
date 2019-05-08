#include<stdio.h>
int main(){
	int i,j,px=1,n=7;
	for(i=1;i<=n;i++){
		for(j=1;j<=n;j++){
			if(j<=px || j>=n-px+1){
				printf("*");
			}else{
				printf(" ");
			}
		}
		if(i<=n/2){
			px++;
		}else{
			px--;
		}
		printf("\n");
	}
	return 0;
}
