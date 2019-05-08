#include<stdio.h>
int main(){
	int i,j,n=5,px=n,py=n;
	for(i=1;i<=n;i++){
		for(j=1;j<=n*2;j++){
			if(j==px || j==py){
				printf("%c",px+64);
			}else{
				printf(" ");
			}
		}
		px--;
		py++;
		printf("\n");
	}
	return 0;
}
