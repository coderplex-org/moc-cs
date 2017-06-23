#include <stdio.h>
#include <string.h>

int main()
{
    char string[20], key[20], key_temp[20];
    int i, len_s, len_k, temp, j, k, k_temp;
    printf("Enter the key: ");
    scanf("%s", key);
    printf("\nEnter plain-text: ");
    scanf("%s", string);
    len_s = strlen(string);
    printf("\nplaintext: %s", string);
    printf("\nciphertext: ");
    len_k = strlen(key);
    
    //making the key cyclic
    j = (len_s/len_k);
    strcpy(key_temp,key);
    for(k=0; k<j; k++) {
        strcat(key_temp,key);
    }
    strncpy(key, key_temp, len_s);

    //encrypting
    for(i=0;i<len_s;i++) {
        if(isalpha(string[i])){ //checking if alphabet
            temp = string[i];
            k_temp = key[i];
            if(k_temp<97){
                k_temp = k_temp - 65;
            } else {
                k_temp = k_temp - 97;
            }
            if(temp<97){ //checking for the case
                temp = ((temp + k_temp-65)%26)+65;
            } else {
                temp = ((temp + k_temp-97)%26)+97;
            }
            
            printf("%c", temp);
        } else {
            printf("%c", string[i]); 
        }
        
    }
    printf("\n");
    return 0;
}
    