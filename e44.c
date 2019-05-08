#include<stdio.h>
int main(){
	int i,j,k,n=5,z=1,l=1;
	for(i=0;i<5;i++){
		for(j=4;j>i;j--){
			printf(" ");
		}
		for(k=1;k<=z;k++){
			printf("%c",abs(k-l)+65);
		}
		l++;
		z+=2;
		printf("\n");
		return 0;
	}
}
