#include <stdio.h>

int main()
{
    int num, i, j, k;
    printf("height:");
    scanf("%d", &num);
    
    
    
    for(i=1; i<=num; i++){
        for(j=num-i; j>0; j--) {
            printf(" ");
        }
        
        for(k=0; k<i; k++) {
            printf("#");
        }
        
        printf(" ");
        
        for(k=0; k<i; k++) {
            printf("#");
        }
        
        for(j=num-i; j>0; j--) {
            printf(" ");
        }
        
        printf("\n");
    }

    return 0;
}

