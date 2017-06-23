#include <stdio.h>
#include <string.h>

int main()
{
    char string[20];
    int key, i, len, temp;
    printf("Enter the key: ");
    scanf("%d", &key);
    printf("\nEnter plain-text: ");
    scanf("%s", string);
    len = strlen(string);
    printf("\nplaintext: %s", string);
    printf("\nciphertext: ");
    
    for(i=0;i<len;i++) {
        if(isalpha(string[i])){
            temp = string[i];
            if(temp<97){
                temp = ((temp + key-65)%26)+65;
            } else {
                temp = ((temp + key-97)%26)+97;
            }
            
            printf("%c", temp);
        } else {
            printf("%c", string[i]);
        }
        
    }
    printf("\n");
    return 0;
}
    