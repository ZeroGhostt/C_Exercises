#include<stdio.h>
int main(){
	char i,j;
	for(i='J';i>='A';i--){
		for(j='J';j>='A';j--){
			printf("%c",j);
		}
		printf("\n");
	}
	return 0;
}
