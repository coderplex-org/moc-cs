#include<stdio.h>
#include<ctype.h>
int main(int argc, char *argv[])
{
	if(argc!=2)
	printf("enter proper argumnet");
	else{
	char a[50];
	int i;
	int n=atoi(argv[1]);
	printf("plaintext:");
	gets(a);
	printf("ciphertext:");
	for(i=0;a[i]!='\0';i++){
		if(isupper(a[i])==1){
		if(a[i]+n<91)
		printf("%c",a[i]+n);
		else{
			n=(a[i]+n-90);
			printf("%c",64+n);
		}
	}
	else{
		if(a[i]+n<123)
		printf("%c",a[i]+n);
		else{
			n=(a[i]+n-122);
			printf("%c",96+n);
		}
	}
}
	printf("\n");
	return 0;

}
}