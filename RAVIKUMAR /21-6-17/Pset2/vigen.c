#include<stdio.h>
#include<string.h>
int main(int argc, char *argv[])
{
	if(argc!=2){
		printf("eneter an proper argument.");
	}
	else{
		char a[50];
		printf("plaintext:");
		gets(a);
		char b[10];
		int i,n,j,n1;
		strcpy(b,argv[1]);
		printf("ciphertext:");
	for(i=0,j=0;a[i]!='\0'&& b[j]!='\0';i++,j++){
	if(isupper(a[i])){
		n=(b[j]-64)-1;
		
	if((a[i]+n)<91)
		printf("%c",a[i]+n);
	else{
			n1=(a[i]+n-90);
			printf("%c",64+n1);
		}
		
	}
	else{
		n=(b[j]-64)-1;
		
	if((a[i]+n)<123)
		printf("%c",a[i]+n);
	else{
			n1=(a[i]+n-90);
			printf("%c",64+n1);
		}
	}
	if(b[j+1]=='\0')
			j=-1;
	}
	
}
	printf("\n");
	
	return 0;
}