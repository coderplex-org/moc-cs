#include<stdio.h>
main()
{
	int i,j,k,n;
	printf("Height = ");
	scanf("%d", &n);
	for(i=0;i<=n;i++){
		for(j=0;j<n-i;j++){
			printf("%s", " ");
		}
		for(k=0;k<i+2;k++){
			printf("#");
		}
		printf(" ");
			for(k=0;k<i+2;k++)
		{
			printf("#");
		}
		
		printf("\n");
	}
	
}
