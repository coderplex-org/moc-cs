#include <stdio.h>

void toh (char from, char to, char inter, int num) {
    if(num>=1) {
        toh(from, inter, to, num-1);
        printf("\nMove top disk from tower %c to top of the tower %c\n", from, to);
        toh(inter, to, from, num-1);
    }
}


int main()
{
    int num;
    printf("Enter the number:");
    scanf("%d", &num);
    toh('A', 'B', 'C', num);
    return 0;
}

