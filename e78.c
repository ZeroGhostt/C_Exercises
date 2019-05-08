#include<stdio.h>
int main(){
	int i,j,k,s=4,p=1;
	for(i=s;i>=-s;i--){
		for(j=1;j<=abs(i);j++){
			printf(" ");
		}
		p=1;
		for(k=s;k>=abs(i);k--){
			printf("%d ",p);
			p++;
			/*if(i>=0){
				p++;
			}else{
				p+=2;
			}*/
		}
		printf("\n");
	}
	return 0;
}
