#include<stdio.h>
int main(){
	char i,j;
	for(i='A';i<='J';i++){
		for(j='A';j<=i;j++){
			printf("%c",i);
		}
		printf("\n");
	}
	return 0;
}
