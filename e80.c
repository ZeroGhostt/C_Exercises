#include<stdio.h>
#include<math.h>
int main(){
	int i,j,k,s=4,p;
	for(i=s;i>=-s;i--){
		for(j=0;j<abs(i);j++){
			printf(" ");
		}
		p=(i>=0)?0:j;
		for(k=s;k>=abs(i);k--){
			printf("%c ",p+65);
			p++;
		}
		printf("\n");
	}
	return 0;
}
