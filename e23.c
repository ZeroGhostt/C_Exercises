#include<stdio.h>
int main(){
	int i,j;
	for(i=0;i<10;i++){
		for(j=9;j>=i;j--){
			printf("%c",j+65);
		}
		printf("\n");
	}
	return 0;
}
