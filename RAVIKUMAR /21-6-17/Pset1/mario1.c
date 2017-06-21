#include<stdio.h>
int main(){
	int n;
	printf("height:");
	scanf("%d",&n);
	int i,j,t;
	for(i=0;i<n;i++){
		for (j = 0; j < n - i - 1; j++) {
			printf(" ");
		}
		for (t = 0; t < i + 2; t++) {
			printf("#");
		}
		printf("\n");
	}
}
