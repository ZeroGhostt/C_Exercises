#include<stdio.h>
#include<math.h>
int main(){
	int i,j,k,s=3;
	for(i=s;i>=-s;i--){
		for(j=1;j<=abs(i);j++){
			printf(" ");
		}
		for(k=s;k>=abs(i);k--){
			printf("%d",k);
		}
		printf("\n");
	}
	return 0;
}
