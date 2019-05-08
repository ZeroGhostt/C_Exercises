#include<stdio.h>
int main(){
	int i,j,k,s=4,p=1;
	for(i=s;i>=-s;i--){
		for(j=1;j<=abs(i);j++){
			printf(" ");
		}
		p=(i>=0)?1:j;
		for(k=s;k>=abs(i);k--){
			printf("%d ",p);
			p++;
		}
		printf("\n");
	}
	return 0;
}
