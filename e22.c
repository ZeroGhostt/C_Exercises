#include<stdio.h>
int main(){
	int i,j;
	for(i=9;i>=0;i--){
		for(j=0;j<=i;j++){
			printf("%c",i+65);
		}
		printf("\n");
	}
	return 0;
}
