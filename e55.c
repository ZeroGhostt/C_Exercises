#include<stdio.h>
int main(){
	int i,j,s=3;
	for(i=s;i>=-s;i--){
		for(j=s;j>=abs(i);j--){
			printf("%d",j);
		}
		printf("\n");
	}
	return 0;
}
