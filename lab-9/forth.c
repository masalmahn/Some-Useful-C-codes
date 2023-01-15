#include <stdio.h>

int main() {
    int num,row=1;
    printf("Please Enter Row Number: ");
    scanf("%d",&num);
    for (row = 1; num >= row; row++) {
        for (int i = 1; i <= row; i++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
