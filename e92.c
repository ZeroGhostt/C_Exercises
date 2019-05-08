#include<stdio.h>
int main(){
	int i,j,n=9,p=1,px=n/2+1;
	for(i=1;i<=n;i++){
		for(j=1;j<=n;j++){
			if(j==px || j==n-px+1){
				printf("%d",p);
			}else{
				printf(" ");
			}
		}
		if(i<=n/2){
			px--;
			p++;
		}else{
			px++;
			p--;
		}
		printf("\n");
	}
	return 0;
}
