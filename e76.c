#include<stdio.h>
int main(){
	int i,j,k,s=3,p=1;
	for(i=s;i>=-s;i--){
		for(j=1;j<=abs(i);j++){
			printf(" ");
		}
		for(k=s;k>=abs(i);k--){
			printf("%d ",p);
		}
		if(i>0){
			p++;
		}else{
			p--;
		}
		printf("\n");
	}
	return 0;
}
