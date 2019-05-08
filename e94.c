#include<stdio.h>
int main(){
	int i,j,n=9,px=n/2+1,p=0;
	for(i=1;i<=n;i++){
		for(j=1;j<=n;j++){
			if(j==px || j==n-px+1){
				printf("%c",p+65);
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
