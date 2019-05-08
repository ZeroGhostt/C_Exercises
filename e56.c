#include<stdio.h>
#include<math.h>
int main(){
	int i,j,s=3;
	for(i=s;i>=-s;i--){
		for(j=abs(i);j<=s;j++){
			printf("%d",j);
		}
		printf("\n");
	}
	return 0;
}
