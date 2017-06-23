#include <stdio.h>

void toi(int n, char x[],char y[],char z[]){
	if(n>=1){
		toi(n-1,x,z,y);
		printf("move top disk from tower %s to top of tower %s\n", x, y);
		toi(n-1,z,y,x);
	}
}
void main(){
	int n;
	scanf("%d",&n);
	toi(n,"A","B","C");
}