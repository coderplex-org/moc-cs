#include<stdio.h>
int main(){
	int n;
	printf("height:");
	scanf("%d",&n);
	int i,j,k;
	for(i=1;i<n+1;i++){
		for(j=0;j<n-i;j++){
			printf(" ");
		}
		for(k=0;k<i;k++)
			printf("#");
		printf(" ");
		for(k=0;k<i;k++)
			printf("#");
		printf("\n");
		
		}
	}
